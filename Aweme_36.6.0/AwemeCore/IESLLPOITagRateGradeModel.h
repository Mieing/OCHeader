@class NSString, IESLLifeURLModel, NSArray;

@interface IESLLPOITagRateGradeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long gradeType;
@property (copy, nonatomic) NSString *gradeText;
@property (retain, nonatomic) IESLLifeURLModel *selectedImageURL;
@property (retain, nonatomic) IESLLifeURLModel *unselectedImageURL;
@property (copy, nonatomic) NSArray *rateTags;
@property (copy, nonatomic) NSString *uiParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rateTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
