@class NSString, NSMutableArray;

@interface FinderLiveButtonInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *buttonInfos;
@property (retain, nonatomic) NSMutableArray *buttonAnimationInfos;
@property (retain, nonatomic) NSString *buttonBackgroundColor;
@property (nonatomic) unsigned int closeShoppingBagAnimationSwitch;
@property (retain, nonatomic) NSString *horizontalLivePortraitBackgroundColor;
@property (retain, nonatomic) NSString *micLivePortraitBackgroundColor;
@property (retain, nonatomic) NSMutableArray *globalButtonInfos;

+ (void)initialize;

@end
