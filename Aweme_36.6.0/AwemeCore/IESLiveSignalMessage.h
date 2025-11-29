@class NSString, NSDictionary, IESLiveInteractUser;

@interface IESLiveSignalMessage : NSObject

@property (copy, nonatomic) NSString *version;
@property (nonatomic) long long priority;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSDictionary *extrasDict;
@property (retain, nonatomic) IESLiveInteractUser *targetUser;
@property (retain, nonatomic) IESLiveInteractUser *sendUser;
@property (retain, nonatomic) NSString *message;

+ (id)messageWith:(id)a0;
+ (id)messageStringWith:(long long)a0 sendTo:(id)a1 from:(id)a2;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
