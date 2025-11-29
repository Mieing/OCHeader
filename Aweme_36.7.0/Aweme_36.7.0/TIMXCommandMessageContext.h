@class NSString, TIMXSDKInstance, NSDate, TIMXPBNMessageBody;

@interface TIMXCommandMessageContext : NSObject

@property (weak, nonatomic) TIMXSDKInstance *r;
@property (nonatomic) long long curUid;
@property (readonly, nonatomic) int messageType;
@property (nonatomic) long long commandType;
@property (retain, nonatomic) TIMXPBNMessageBody *message;
@property (nonatomic) int inbox;
@property (copy, nonatomic) NSString *reason;
@property (retain, nonatomic) NSDate *startHandleDate;
@property (copy, nonatomic) id /* block */ callback;

- (id)initWithRootObject:(id)a0 message:(id)a1 inbox:(int)a2 reason:(id)a3;
- (id)initWithRootObject:(id)a0 message:(id)a1 commandType:(long long)a2 inbox:(int)a3;
- (id)initWithRootObject:(id)a0 message:(id)a1 inbox:(int)a2;
- (void).cxx_destruct;
- (id)description;

@end
