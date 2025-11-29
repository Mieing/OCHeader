@class NSString, NSDictionary;

@interface BDARVLiteWebViewModel : NSObject

@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *liteWebURL;
@property (copy, nonatomic) NSString *webTitle;
@property (nonatomic) unsigned long long preloadType;
@property (nonatomic) unsigned long long webviewType;
@property (nonatomic) BOOL disableCornerRadius;
@property (nonatomic) BOOL disableClose;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *skanParameters;
@property (copy, nonatomic) NSDictionary *nativeSiteConfig;
@property (copy, nonatomic) NSDictionary *nativeSitAdInfo;
@property (copy, nonatomic) NSString *appData;
@property (copy, nonatomic) NSDictionary *extraData;
@property (nonatomic) BOOL dismissTitleLabel;
@property (nonatomic) BOOL enableInterceptPV;

- (void).cxx_destruct;
- (id)toDictionary;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
