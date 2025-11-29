@class IESLiveBackgroundView, NSString, IESLiveImageView, UILabel, UIButton;
@protocol IESLiveRoomService;

@interface IESLiveStreamListenModeDecorationView : UIView <IESLiveStreamDecorationViewProtocol>

@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveImageView *headphoneImageView;
@property (retain, nonatomic) UILabel *headphoneHintLabel;
@property (retain, nonatomic) UIButton *seeLiveStreamBtn;
@property (copy, nonatomic) id /* block */ seeLiveStreamAction;
@property (retain, nonatomic) IESLiveBackgroundView *bgView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildConstraints:(BOOL)a0;
- (void)seeLiveStreamAction:(id)a0;
- (long long)indexAtDecorationViewHierarchy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 room:(id)a1;
- (void).cxx_destruct;

@end
