@class NSString, UIImage, HTSLiveItemDotInfo;

@interface IESLiveGuideToolBarItem : HTSLiveToolbarItem

@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageCornerRadius;
@property (nonatomic) unsigned long long rightTopCount;
@property (copy, nonatomic) NSString *rightTopStr;
@property (retain, nonatomic) UIImage *rightTopBgImage;
@property (nonatomic) BOOL shouldUseCustumIcon;
@property (nonatomic) BOOL shouldUseCustumTitle;
@property (nonatomic) BOOL shouldBlockTap;
@property (copy, nonatomic) id /* block */ onShowTrackEvent;
@property (copy, nonatomic) id /* block */ onTapTrackEvent;
@property (nonatomic) long long redDotShowedTimes;
@property (nonatomic) unsigned long long redDotStrategy;
@property (retain, nonatomic) HTSLiveItemDotInfo *dotInfo;
@property (nonatomic) BOOL hasDisplayedItem;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *rightActionText;
@property (nonatomic) BOOL isSwitchOn;
@property (retain, nonatomic) NSString *businessExtra;
@property (retain, nonatomic) NSString *subIdentifier;

- (void).cxx_destruct;
- (id)init;

@end
