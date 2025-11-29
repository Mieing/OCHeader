@class NSString, NSArray, AWECodeGenFloatTipsRewardModel, AWECodeGenDesktopWidgetFloatTipsDataModel;

@interface AWECodeGenFloatTipsDataModel : AWEBaseDataModel

@property (nonatomic) long long baseTime;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) AWECodeGenFloatTipsRewardModel *rewardModel;
@property (copy, nonatomic) NSString *mainButtonText;
@property (copy, nonatomic) NSString *subButtonText;
@property (retain, nonatomic) AWECodeGenDesktopWidgetFloatTipsDataModel *desktopWidgetModel;
@property (copy, nonatomic) NSArray *buttonListModelArray;
@property (copy, nonatomic) NSArray *contentListModelArray;
@property (copy, nonatomic) NSString *floatingVideo;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
