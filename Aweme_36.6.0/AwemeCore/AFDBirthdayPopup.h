@class UIButton, NSString, TTTAttributedLabel, UIImageView, AWEUILoadingView, UIView, UILabel;
@protocol IESVideoPlayerProtocol;

@interface AFDBirthdayPopup : UIView <IESVideoPlayerDelegate>

@property (retain, nonatomic) UIView *videoView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) TTTAttributedLabel *nameLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIImageView *closeButton;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
