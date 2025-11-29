@class NSString, NSArray;

@interface AWEIMFansGroupIntroduceModel : IESIMBaseApiModel

@property (nonatomic) long long numCreator;
@property (copy, nonatomic) NSString *introduceVideoUrl;
@property (copy, nonatomic) NSString *introduceBackupUrl;
@property (copy, nonatomic) NSString *introduceVideoUrlDark;
@property (copy, nonatomic) NSString *introduceBackupUrlDark;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *iconList;
@property (copy, nonatomic) NSString *faqUrl;
@property (copy, nonatomic) NSString *faqDesc;

+ (id)iconListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
