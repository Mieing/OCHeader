@class ACCVideoCommentModel, BGView, UIImageView, AWEInteractionStickerModel, UILabel, NSString, YYLabel;
@protocol ACCStickerContainerProtocol;

@interface ACCVideoCommentStickerView : UIView <ACCStickerEditContentProtocol, ACCStickerContentDisplayProtocol>

@property (retain, nonatomic) UILabel *replierLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) YYLabel *commentLabel;
@property (retain, nonatomic) UIImageView *emoIconImageView;
@property (retain, nonatomic) BGView *bgView;
@property (retain, nonatomic) ACCVideoCommentModel *videoCommentModel;
@property (retain, nonatomic) AWEInteractionStickerModel *stickerModel;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (nonatomic) long long stickerId;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentDidUpdateToScale:(double)a0;
- (id)copyForContext:(id)a0;
- (void)p_updateUI;
- (void)configWithModel:(id)a0 completion:(id /* block */)a1;
- (id)initWithStickerModel:(id)a0;
- (id)initWithStickerModel:(id)a0 showVisualEffect:(BOOL)a1;
- (id)initWithStickerModel:(id)a0 showVisualEffect:(BOOL)a1 shouldRasterize:(BOOL)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
