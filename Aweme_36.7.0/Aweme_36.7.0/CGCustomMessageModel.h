@class NSTimer, NSString;
@protocol CGCustomMessageCallback;

@interface CGCustomMessageModel : NSObject

@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (copy, nonatomic) NSString *mid;
@property (copy, nonatomic) NSString *sendUserId;
@property (copy, nonatomic) NSString *payload;
@property (nonatomic) long long time;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ callback;
@property (weak, nonatomic) id<CGCustomMessageCallback> innerCallback;

- (void)sendMessageTimeout;
- (id)initNoAckModelWithSendUserId:(id)a0 payload:(id)a1;
- (id)initWithSendUserId:(id)a0 payload:(id)a1 callback:(id /* block */)a2;
- (id)initWithSendUserId:(id)a0 mId:(id)a1 payload:(id)a2 time:(long long)a3;
- (void)invokeSuccessCallback;
- (void).cxx_destruct;
- (id)dictionary;

@end
