@interface TempoiOS.TempoTrace : NSObject

+ (void)StartTraceCaseWithName:(id)a0;
+ (void)FinishTraceCaseWithDesc:(id)a0;
+ (void)BeginEventWithName:(id)a0 desc:(id)a1;
+ (void)EndEvent;

- (void).cxx_destruct;
- (id)init;

@end
