@class NSString, NSArray, AWEURLModel;

@interface AWEPOITagRateGradeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long gradeType;
@property (copy, nonatomic) NSString *gradeText;
@property (retain, nonatomic) AWEURLModel *selectedImageURL;
@property (retain, nonatomic) AWEURLModel *unselectedImageURL;
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
