@class NSString, NSArray, AWECodeGenSearchCardConfigModel;

@interface AWECodeGenSearchCardModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *queryModelArray;
@property (retain, nonatomic) AWECodeGenSearchCardConfigModel *darkConfigModel;
@property (retain, nonatomic) AWECodeGenSearchCardConfigModel *lightConfigModel;
@property (nonatomic) BOOL isNewVersion;
@property (nonatomic) long long index;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *modelID;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
