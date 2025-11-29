@class NSString, IESECLLView;
@protocol IESECFeedContentCardCellDelegate, IESECFeedContentCardCellModel;

@interface IESECFeedContentCardCell : UICollectionViewCell <IESECRelationInlineProtocol>

@property (retain, nonatomic) IESECLLView *llView;
@property (retain, nonatomic) id<IESECFeedContentCardCellModel, IESECFeedContentCardCellDelegate> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)cellBuilderWithModel:(id)a0;
+ (double)heightForCellWithModel:(id)a0;

- (id)playerContainer;
- (id)playItem;
- (void)bindViewModel:(id)a0;
- (BOOL)isDanmakuEnable;
- (id)danmakuDataSource;
- (BOOL)isVoiceControllable;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
