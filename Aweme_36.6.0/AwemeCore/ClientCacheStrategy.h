@class NSString;

@interface ClientCacheStrategy : GPBMessage

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int action;
@property (nonatomic) BOOL hasAction;
@property (copy, nonatomic) NSString *msg;
@property (nonatomic) BOOL hasMsg;

+ (id)descriptor;

- (id)msg;
- (int)action;
- (int)type;

@end
