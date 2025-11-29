@class UIButton, NSString, UIImageView, NSDictionary, UIViewController, AWEOriginalAdModel, YYLabel;
@protocol AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol, AWEAwemePlayVideoTrackProtocol;

@interface AWESearchHotSpotLiveAutoPlayCellController : AWESearchLiveAutoPlayViewController <IESLivePlayerControllerDelegate, AWESearchHorizontalAutoPlayCellProtocol>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) YYLabel *hostNameLabel;
@property (nonatomic) unsigned long long cardStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long index;
@property (nonatomic) double searchHorizontalAutoPlayCellWidth;
@property (nonatomic) struct CGSize { double x0; double x1; } cellSize;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;
@property (readonly, nonatomic) BOOL isResourceRecalled;
@property (retain, nonatomic) UIButton *videoActionButton;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *playVideoViewController;
@property (copy, nonatomic) id /* block */ playerWillStartNextLoop;

- (void)cellWillDisplay;
- (void)player:(id)a0 mediaSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)updateAvatarWithModel:(id)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)updateModel:(id)a0;

@end
