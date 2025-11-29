@class NSString, NSArray;
@protocol CJPayBioPaymentSubGuideModel;

@interface CJPayBioPaymentInfo : JSONModel

@property (nonatomic) BOOL showGuide;
@property (copy, nonatomic) NSString *cancelBtnDesc;
@property (copy, nonatomic) NSString *openBioDesc;
@property (copy, nonatomic) NSString *guideDesc;
@property (copy, nonatomic) NSString *bioType;
@property (copy, nonatomic) NSString *successDesc;
@property (copy, nonatomic) NSString *showType;
@property (copy, nonatomic) NSArray<CJPayBioPaymentSubGuideModel> *subGuide;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
