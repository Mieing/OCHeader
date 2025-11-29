@class IESLiveInteractSubtitleViewModel, NSArray, NSString, IESLiveInteractSubtitleConfig, IESLiveInteractSubtitleCollectionViewCell;
@protocol IESLiveCompoundSubscription;

@interface IESLiveInteractSubtitleNormalView : UIView <IESLiveInteractSubtitleViewProtocol>

@property (weak, nonatomic) IESLiveInteractSubtitleViewModel *viewModel;
@property (copy, nonatomic) NSArray *userModels;
@property (nonatomic) double animDuration;
@property (weak, nonatomic) IESLiveInteractSubtitleConfig *config;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) IESLiveInteractSubtitleCollectionViewCell *firstCell;
@property (retain, nonatomic) IESLiveInteractSubtitleCollectionViewCell *secondCell;
@property (retain, nonatomic) IESLiveInteractSubtitleCollectionViewCell *incomingCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (void)initView;
- (void)updateViewModel:(id)a0;
- (void)updateUsers:(id)a0;
- (void)layoutSytleFrom;
- (id)userIdToUserName:(id)a0;
- (void)setCellContent;
- (void)scrollIfNeeded;
- (id)getFormatName:(id)a0;
- (void)scrollAnimationEmptyNameWithCompletion:(id /* block */)a0;
- (void)scrollAnimationWithCompletion:(id /* block */)a0;
- (void)layoutSytleTo;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
