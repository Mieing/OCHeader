@class AWEAwemeModel;
@protocol AWEFeedVideoSingleCardLayoutAdjusterProtocol;

@interface AWEModernFeedActionPanelFrame : NSObject

@property (retain, nonatomic) id<AWEFeedVideoSingleCardLayoutAdjusterProtocol> layoutAdjuster;
@property (retain, nonatomic) id<AWEFeedVideoSingleCardLayoutAdjusterProtocol> qualityLayoutAdjuster;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } actionPanelFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } timeLabelFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } likeBtnFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } commentBtnFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } favoriteBtnFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } repostFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } shareBtnFrame;
@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) unsigned long long browsedType;
@property (nonatomic) BOOL shouldShowRepostButton;
@property (nonatomic) BOOL shouldShowFavoriteButton;
@property (nonatomic) BOOL shouldShowActionPanel;
@property (nonatomic) BOOL shouldShowTimeInfo;
@property (retain, nonatomic) AWEAwemeModel *aweme;

- (void)configFrameWithAweme:(id)a0 containerWidth:(double)a1 layoutType:(unsigned long long)a2 browsedType:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)init;

@end
