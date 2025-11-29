@class NSString, NSArray;

@interface AWECodeGenBaseNoticeTabModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *schemaUrl;
@property (nonatomic) int level;
@property (copy, nonatomic) NSArray *noticeTabModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
