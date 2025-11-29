@class UIImageView, NSString;
@protocol IESLivePipViewDelegate;

@interface IESLivePipSimpleView : UIView <IESLivePipViewService>

@property (retain, nonatomic) UIImageView *avatarView;
@property (weak, nonatomic) id<IESLivePipViewDelegate> delegate;
@property (nonatomic) BOOL enableAttach;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTapClose;
- (BOOL)enableAttachScreenWhenGestureCancelled;
- (void)didTapEnterRoom;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
