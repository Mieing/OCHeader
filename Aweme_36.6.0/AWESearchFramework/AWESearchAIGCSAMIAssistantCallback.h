@class NSString;
@protocol SAMICoreCallbackListener;

@interface AWESearchAIGCSAMIAssistantCallback : NSObject <SAMICoreCallbackListener>

@property (weak, nonatomic) id<SAMICoreCallbackListener> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMessageReceived:(long long)a0 withBlock:(id)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
