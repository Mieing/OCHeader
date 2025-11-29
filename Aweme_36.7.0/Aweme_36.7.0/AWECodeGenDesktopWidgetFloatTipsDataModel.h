@class NSString, AWECodeGenFloatTipsRewardModel;

@interface AWECodeGenDesktopWidgetFloatTipsDataModel : AWEBaseDataModel

@property (nonatomic) int showStyle;
@property (nonatomic) long long widgetStyle;
@property (nonatomic) int headerStyle;
@property (copy, nonatomic) NSString *widgetImg;
@property (copy, nonatomic) NSString *widgetImgHeight;
@property (nonatomic) BOOL canRetryPlus;
@property (nonatomic) BOOL canGuideSmallWidget;
@property (copy, nonatomic) NSString *guideAddWidgetSize;
@property (retain, nonatomic) AWECodeGenFloatTipsRewardModel *beforePlusRewardModel;
@property (nonatomic) BOOL isNewWidget;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
