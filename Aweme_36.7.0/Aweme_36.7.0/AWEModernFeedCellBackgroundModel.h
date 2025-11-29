@class UIColor;

@interface AWEModernFeedCellBackgroundModel : NSObject

@property (nonatomic) BOOL isInBackground;
@property (nonatomic) BOOL isInRectangleBackground;
@property (nonatomic) unsigned long long cardCornerType;
@property (nonatomic) BOOL isWaterfallLayout;
@property (nonatomic) unsigned long long qualityStyleCornerType;
@property (retain, nonatomic) UIColor *backgroundColorLight;
@property (retain, nonatomic) UIColor *backgroundColorDark;
@property (nonatomic) BOOL activityCardBottom;

- (void).cxx_destruct;

@end
