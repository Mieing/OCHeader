@class NSString;

@interface WCFinderLiteAppParams : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *page;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *miniVersion;
@property (copy, nonatomic) NSString *defaultUrl;
@property (copy, nonatomic) NSString *extInfo;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (BOOL)isValid;
- (void).cxx_destruct;

@end
