@class NSArray, NSString, IESLLPOICOIDoubleItemDisplayMobInfoModel;

@interface IESLLPOICOIDoubleItemDisplayInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *locationTexts;
@property (copy, nonatomic) NSArray *singleLocationTexts;
@property (copy, nonatomic) NSArray *titleGroup;
@property (copy, nonatomic) NSArray *rateGroup;
@property (copy, nonatomic) NSArray *subtitleGroup;
@property (copy, nonatomic) NSArray *infoGroup;
@property (copy, nonatomic) NSArray *thirdGroup;
@property (retain, nonatomic) IESLLPOICOIDoubleItemDisplayMobInfoModel *mobInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)thirdGroupJSONTransformer;
+ (id)titleGroupJSONTransformer;
+ (id)rateGroupJSONTransformer;
+ (id)subtitleGroupJSONTransformer;
+ (id)infoGroupJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
