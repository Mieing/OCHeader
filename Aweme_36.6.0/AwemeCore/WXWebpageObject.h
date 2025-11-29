@class NSString, NSDictionary;

@interface WXWebpageObject : NSObject

@property (copy, nonatomic) NSString *webpageUrl;
@property (nonatomic) BOOL isSecretMessage;
@property (retain, nonatomic) NSDictionary *extraInfoDic;

+ (id)object;

- (void).cxx_destruct;

@end
