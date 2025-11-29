@class NSData, NSString, NSMutableDictionary;

@interface WebViewSanboxTaskAuthInfo : MMObject

@property (retain, nonatomic) NSData *permissionData;
@property (copy, nonatomic) NSString *fullUrl;
@property (retain, nonatomic) NSMutableDictionary *httpHeaders;

- (void).cxx_destruct;

@end
