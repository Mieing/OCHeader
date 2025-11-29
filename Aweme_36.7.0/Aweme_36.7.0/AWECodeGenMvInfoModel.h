@class NSString, NSArray, AWECodeGenUrlModel;

@interface AWECodeGenMvInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *modelID;
@property (retain, nonatomic) AWECodeGenUrlModel *iconUrlModel;
@property (nonatomic) int mvType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *lokiId;
@property (nonatomic) BOOL isImageTemplate;
@property (nonatomic) int mvUploadType;
@property (nonatomic) BOOL enableAlienation;
@property (nonatomic) int provider;
@property (copy, nonatomic) NSArray *featuresArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
