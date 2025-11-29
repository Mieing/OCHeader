@class AWEMusicDetailHeaderDataHelper, DUXPopover, AWEMusicDetailMusicCardViewConfig, UIView;
@protocol AWEMusicDetailHeaderViewProtocol;

@interface AWEMusicDetailHeaderContainerViewHolder : NSObject

@property (retain, nonatomic) AWEMusicDetailMusicCardViewConfig *cardConfig;
@property (retain, nonatomic) UIView<AWEMusicDetailHeaderViewProtocol> *headerView;
@property (weak, nonatomic) DUXPopover *favoritePopover;
@property (retain, nonatomic) AWEMusicDetailHeaderDataHelper *dataHelper;
@property (copy, nonatomic) id /* block */ shareToStoryButtonClickHandler;
@property (copy, nonatomic) id /* block */ didTapCollectLunaHintHandler;
@property (copy, nonatomic) id /* block */ didShowCollectLunaHintHandler;

- (void)removeFavoriteHint;
- (void)updateAuthorNameLabelWithTapAction:(id /* block */)a0;
- (void)configEventForHeaderViewShareMusicStory;
- (void)updateCollectToLunaUI:(id)a0 isCollected:(BOOL)a1;
- (void)updateMusicTitle:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
