@class FeedCardDislikeButtonInfo, NSString, FeedCardSwiperBackground, NSMutableArray, FeedCardBackgroundInfo, FeedCardActionButtonInfo;

@interface FeedCardLynxConfig : GPBMessage

@property (copy, nonatomic) NSString *dynamicURL;
@property (nonatomic) BOOL hasDynamicURL;
@property (retain, nonatomic) FeedCardBackgroundInfo *background;
@property (nonatomic) BOOL hasBackground;
@property (retain, nonatomic) FeedCardActionButtonInfo *actionButton;
@property (nonatomic) BOOL hasActionButton;
@property (retain, nonatomic) FeedCardDislikeButtonInfo *dislikeButton;
@property (nonatomic) BOOL hasDislikeButton;
@property (nonatomic) int contentPaddingLr;
@property (nonatomic) BOOL hasContentPaddingLr;
@property (nonatomic) int buttonPaddingBottom;
@property (nonatomic) BOOL hasButtonPaddingBottom;
@property (nonatomic) int marginTop;
@property (nonatomic) BOOL hasMarginTop;
@property (copy, nonatomic) NSString *slideColor;
@property (nonatomic) BOOL hasSlideColor;
@property (nonatomic) int dynamicHeight;
@property (nonatomic) BOOL hasDynamicHeight;
@property (copy, nonatomic) NSString *entranceAnimationType;
@property (nonatomic) BOOL hasEntranceAnimationType;
@property (retain, nonatomic) FeedCardSwiperBackground *swiperBackground;
@property (nonatomic) BOOL hasSwiperBackground;
@property (retain, nonatomic) NSMutableArray *swiperButtonConfigArray;
@property (readonly, nonatomic) unsigned long long swiperButtonConfigArray_Count;

+ (id)descriptor;

@end
