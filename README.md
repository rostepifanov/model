Репозитории создан в результате написания диплома НГУ-2018

В папке 6DOF хранится шестистепенная модель параплана. Реализованные силы и моменты:
 - Крыло
   - Аэродинамическая сила
   - Момент аэродинамической силы
   - Аэродинамическая сила присоединеных масс (no_implementation)
   - Момент силы присоединенных масс  (no_implementation)
   - Аэродинамический момент присоединенных масс (no_implementation)
   - Аэродинамический момент
   - Аэродинамическая сила элеронов
   - Момент аэродинамической силы элеронов
   - Сила тяжести
 - Каретка
   - Аэродинамическая сила
   - Сила тяжести
   - Момент аэродинамической силы
   - Силы тяги
   - Момент силы тяги

Реализованные аглоритмы управления и модели потребления потлива:
 - Алгоритмы управления:
   - Планирование с незатянутыми элеронами и выключенным двигателем
   - Полет с удержанием высоты
   - Послет с минимизацией потребления энергии при удержании высоты
 - Модели потребеления:
   - Отсутствие потребления
   - Константное потребление
   - Потребление с зависимостью от силы тяги

В папке 9DOF хранится девятистепенная модель параплана. Для модели реализованны силы и моменты:
 - Крыло
 - Каретка
