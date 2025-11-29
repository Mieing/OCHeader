@class UIColor, NSArray;
@protocol IESLiveRoomService;

@interface IESLiveMultiKTVBasicInfo : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) BOOL smallMode;
@property (retain, nonatomic) UIColor *statusBarBgColor;
@property (retain, nonatomic) UIColor *contentBgColor;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (retain, nonatomic) NSArray *stageBgAnimatedImageURLs;
@property (retain, nonatomic) NSArray *stageBgStaticImageURLs;
@property (retain, nonatomic) NSArray *avatarImageLoopURLs;
@property (retain, nonatomic) NSArray *playModeList;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL isSmallScreen;

- (void).cxx_destruct;

@end
