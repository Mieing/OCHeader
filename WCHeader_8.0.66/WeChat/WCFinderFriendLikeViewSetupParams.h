@class UIColor, UIFont;

@interface WCFinderFriendLikeViewSetupParams : NSObject

@property (nonatomic) struct CGSize { double width; double height; } headImageSize;
@property (nonatomic) double headImageMargin;
@property (retain, nonatomic) UIFont *tipsFont;
@property (retain, nonatomic) UIColor *tipsColor;

- (id)init;
- (double)infoViewHeight;
- (void).cxx_destruct;

@end
