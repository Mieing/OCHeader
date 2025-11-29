@class UIImage, NSString;

@interface AWERelatedVideoDetailRelatedVideoListCellUIConfig : NSObject

@property (nonatomic) BOOL shouldShowTag;
@property (nonatomic) BOOL shouldShowGuideFlow;
@property (retain, nonatomic) UIImage *guideIcon;
@property (copy, nonatomic) NSString *guideTitle;
@property (nonatomic) BOOL shouldShowDig;

+ (id)guideFlowXiGuaConfig;
+ (id)configWithModel:(id)a0 context:(id)a1 index:(long long)a2;
+ (id)guideFlowQingTaoConfig;
+ (id)defaultConfig;

- (void).cxx_destruct;

@end
