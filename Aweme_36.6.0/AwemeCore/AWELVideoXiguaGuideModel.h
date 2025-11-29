@class AWELVideoXiguaGuidePopupModel, NSString, NSNumber, AWEURLModel;

@interface AWELVideoXiguaGuideModel : AWEBaseApiModel

@property (nonatomic) BOOL guide;
@property (copy, nonatomic) NSString *minRatio;
@property (copy, nonatomic) NSString *labelText;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *fullScreenControl;
@property (nonatomic) long long playDoneControl;
@property (retain, nonatomic) AWELVideoXiguaGuidePopupModel *guidePopup;

+ (id)iconJSONTransformer;
+ (id)guidePopupJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
