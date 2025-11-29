@class NSMutableDictionary, NSMutableString, NSURL, NSDictionary, NSString;

@interface FavWebCacheContext : MMObject

@property (retain, nonatomic) NSURL *currentUrl;
@property (retain, nonatomic) NSMutableString *htmlString;
@property (retain, nonatomic) NSMutableDictionary *fileSrcMap;
@property (retain, nonatomic) NSMutableDictionary *ajaxCacheData;
@property (retain, nonatomic) NSMutableDictionary *ajaxCacheHeaders;
@property (retain, nonatomic) NSDictionary *localStorage;
@property (retain, nonatomic) NSDictionary *sessionStorage;
@property (retain, nonatomic) NSString *cookie;

- (id)init;
- (void).cxx_destruct;

@end
