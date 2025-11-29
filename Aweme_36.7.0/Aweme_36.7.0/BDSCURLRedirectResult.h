@class NSDictionary, NSString;

@interface BDSCURLRedirectResult : NSObject

@property (nonatomic) long long httpCode;
@property (copy, nonatomic) NSDictionary *header;
@property (readonly, copy, nonatomic) NSString *redirectURL;
@property (copy, nonatomic) NSString *originUrl;

- (void).cxx_destruct;

@end
