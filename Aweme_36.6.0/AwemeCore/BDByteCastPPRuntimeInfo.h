@class NSString;

@interface BDByteCastPPRuntimeInfo : NSObject

@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *messageId;

- (void).cxx_destruct;

@end
