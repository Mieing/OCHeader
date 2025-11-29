@protocol SAMICoreCallbackListener;

@interface SAMICore_AISAbilityCreateParameter : NSObject

@property (retain, nonatomic) id<SAMICoreCallbackListener> abilityUpdateListener;

- (void)dealloc;

@end
