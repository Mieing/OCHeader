@class NSString;

@interface AWEIMMessageDegradationInfo : NSObject

@property (copy, nonatomic) NSString *sendContent;
@property (copy, nonatomic) NSString *recvContent;
@property (copy, nonatomic) NSString *displayContent;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
