@class NSString, NSArray, AWECodeGenInteractiveTitleModel;

@interface AWECodeGenVisitorNoticeModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *visitorModelArray;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) int labelType;
@property (copy, nonatomic) NSString *hint;
@property (retain, nonatomic) AWECodeGenInteractiveTitleModel *hintWithParamsModel;
@property (nonatomic) long long mergeCount;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
