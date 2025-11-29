@class HTSEventContext;
@protocol IESLivePlayerProtocol, AWELiveAudienceControllerDelegate;

@interface AWELiveAudienceVCConfig : NSObject

@property (nonatomic) BOOL needHideRightBottomBanner;
@property (nonatomic) BOOL showLandscape;
@property (nonatomic) BOOL showShopCard;
@property (nonatomic) BOOL disablePopout;
@property (nonatomic) BOOL disableReplaceVC;
@property (nonatomic) BOOL needRecreatePlayer;
@property (weak, nonatomic) id<AWELiveAudienceControllerDelegate> audienceDelegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } screenInsets;
@property (retain, nonatomic) HTSEventContext *context;
@property (weak, nonatomic) id<IESLivePlayerProtocol> player;

- (void).cxx_destruct;

@end
