@class NSString;

@interface TemplateLiteAppOPWrap : NSObject

@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *minVersion;
@property (nonatomic) unsigned long long openType;
@property (nonatomic) BOOL isTransparent;
@property (nonatomic) BOOL isForbidRightgesture;
@property (nonatomic) double heightPercent;
@property (copy, nonatomic) NSString *defaultUrl;

+ (id)liteAppOPWrapWithJSON:(id)a0;
+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
