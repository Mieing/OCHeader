@class NSString, UIImageView, AWEInteractionHashtagStickerModel, UILabel, UIView, AWEChallengeModel;
@protocol ACCStickerContainerProtocol;

@interface ACCHashTagStickerView : UIView <ACCHashTagStickerViewUIProtocol, ACCStickerContentDisplayProtocol>

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *hashTitle;
@property (retain, nonatomic) UILabel *hashLabel;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (nonatomic) double hashTitleWidth;
@property (retain, nonatomic) AWEInteractionHashtagStickerModel *hashTagStickerModel;
@property (retain, nonatomic) AWEChallengeModel *challengeModel;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (nonatomic) long long stickerId;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewHeight;
- (id)initWithStickerModel:(id)a0;
- (void)startEditWithSuperView:(id)a0 animationDuration:(double)a1 animationBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)endEditWithSuperView:(id)a0 animationDuration:(double)a1 animationBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)updateViewWidth;
- (void)showRightArrow:(BOOL)a0;
- (void)updateTextFieldWidth;
- (double)calculatedViewWidth;
- (void)updateHashtagTitle;
- (void).cxx_destruct;
- (void)setupUI;

@end
