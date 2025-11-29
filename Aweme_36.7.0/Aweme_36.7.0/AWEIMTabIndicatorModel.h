@class NSString, UIImage;

@interface AWEIMTabIndicatorModel : NSObject

@property (nonatomic) long long state;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long unReadCount;
@property (nonatomic) long long dotCount;
@property (retain, nonatomic) UIImage *tailingImage;
@property (nonatomic) struct CGSize { double width; double height; } tailingImageSize;
@property (nonatomic) BOOL isDefaultSelected;
@property (nonatomic) BOOL hideUnreadDot;
@property (retain, nonatomic) NSString *tabTrackName;
@property (nonatomic) BOOL isMenuWillShow;
@property (nonatomic) long long badgeType;
@property (nonatomic) long long preBadgeType;
@property (nonatomic) long long badgePosition;

- (void)observeAllAssistantUnreadCountChangeWithHandler:(id /* block */)a0;
- (void)observeTabUnreadCountChangeWithHandler:(id /* block */)a0;
- (long long)currentDefaultBadgeType;
- (void)p_trackUnreadDotShowIfNeededWithCurrent:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
