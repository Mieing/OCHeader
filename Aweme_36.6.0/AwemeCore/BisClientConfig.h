@class NSString, BisClientConfigContent;

@interface BisClientConfig : NSObject

@property (retain, nonatomic) BisClientConfigContent *content;
@property (retain, nonatomic) NSString *sign;

- (void).cxx_destruct;

@end
