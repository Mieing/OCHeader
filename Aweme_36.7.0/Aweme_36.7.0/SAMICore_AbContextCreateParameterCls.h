@protocol SAMICoreABCallbackListener;

@interface SAMICore_AbContextCreateParameterCls : NSObject

@property (retain, nonatomic) id<SAMICoreABCallbackListener> listener;

- (void)dealloc;

@end
