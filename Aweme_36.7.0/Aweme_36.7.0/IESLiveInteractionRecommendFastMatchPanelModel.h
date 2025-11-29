@class UIFont, NSString, NSArray, UIImage, UIColor;
@protocol IESLiveWebImageService;

@interface IESLiveInteractionRecommendFastMatchPanelModel : NSObject

@property (weak, nonatomic) id<IESLiveWebImageService> webImageService;
@property (copy, nonatomic) NSString *topRightButtonText;
@property (readonly, nonatomic) UIImage *defaultAvatar;
@property (copy, nonatomic) NSArray *anchorAvatarURLs;
@property (copy, nonatomic) UIImage *anchorAvatarBorder;
@property (copy, nonatomic) NSArray *anchorAvatarAnimationURLs;
@property (copy, nonatomic) NSString *roomTitle;
@property (copy, nonatomic) NSString *roomTag;
@property (retain, nonatomic) UIFont *roomTagFont;
@property (retain, nonatomic) UIColor *roomTagColor;
@property (retain, nonatomic) UIColor *roomTagBackgroundColor;
@property (nonatomic) double roomTagBackgroundBorderRadius;
@property (copy, nonatomic) NSArray *guestAvatarsURLs;
@property (nonatomic) unsigned long long maxDisplayGuestAvatarsCount;
@property (copy, nonatomic) NSString *guestsDescription;
@property (copy, nonatomic) NSString *bottomLeftButtonText;
@property (copy, nonatomic) NSString *bottomRightButtonText;
@property (nonatomic) long long hideSource;

+ (struct CGSize { double x0; double x1; })panelSize;
+ (id)constructPopUpItemOfPanel:(id)a0 container:(id)a1 didShow:(id /* block */)a2 didHide:(id /* block */)a3;
+ (id)defaultRoomTagFont;
+ (id)defaultRoomTagColor;
+ (id)defaultRoomTagBackgroundColor;

- (id)initWithWebImageService:(id)a0;
- (void)parseFromFastMatchResponseData:(id)a0;
- (void).cxx_destruct;

@end
