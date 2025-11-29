@class NSString;

@interface ForwardMessageSession : NSObject

@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) unsigned long long createTime;
@property (readonly, nonatomic) unsigned long long existTime;
@property (nonatomic) unsigned long long forwardType;
@property (nonatomic) unsigned long long forwardScene;
@property (nonatomic) int createType;
@property (nonatomic) int closeType;

- (id)init;
- (void).cxx_destruct;

@end
