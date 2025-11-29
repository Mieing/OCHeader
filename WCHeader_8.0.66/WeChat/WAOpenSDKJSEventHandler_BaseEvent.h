@class NSString, WAOpenSDKJSEventHandlerContext;
@protocol WAOpenSDKJSEventHandlerDelegate;

@interface WAOpenSDKJSEventHandler_BaseEvent : NSObject

@property (copy, nonatomic) NSString *transitiveData;
@property (retain, nonatomic) WAOpenSDKJSEventHandlerContext *context;
@property (weak, nonatomic) id<WAOpenSDKJSEventHandlerDelegate> delegate;
@property (nonatomic) long long resultType;

+ (id)getResultDic:(id)a0 dic:(id)a1;

- (void)handleJSEvent:(id)a0;
- (void)endWithSuccess:(id)a0;
- (void)endWithErrMsg:(id)a0;
- (void)endWithErrMsg:(id)a0 dic:(id)a1;
- (void)endWithCancel;
- (void)endWithCancel:(id)a0;
- (void)endWithMsg:(id)a0 dic:(id)a1;
- (void)endWithResult:(id)a0;
- (void)sendQRMsg:(id)a0 result:(id)a1 qrState:(long long)a2;
- (void).cxx_destruct;

@end
