@class NSString, NSArray;

@interface AWECodeGenAwemeV1GenPicFromTextRotateResponseModel : AWEBaseDataModel

@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSArray *templateGenInfoModelArray;
@property (copy, nonatomic) NSString *moodSwing;
@property (copy, nonatomic) NSArray *wordSegmentsInfoListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
