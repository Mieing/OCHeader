@class NSString;

@interface ASSTokenResult : NSObject

@property (retain, nonatomic) NSString *umidToken;
@property (retain, nonatomic) NSString *vkeyidToken;
@property (retain, nonatomic) NSString *vkeyid;
@property (retain, nonatomic) NSString *clientKey;

- (void).cxx_destruct;

@end
