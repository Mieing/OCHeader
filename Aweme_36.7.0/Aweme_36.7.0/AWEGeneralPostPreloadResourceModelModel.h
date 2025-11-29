@class NSString;

@interface AWEGeneralPostPreloadResourceModelModel : AWEBaseBizConfigModel

@property (nonatomic) long long themeId;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL needDelete;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
