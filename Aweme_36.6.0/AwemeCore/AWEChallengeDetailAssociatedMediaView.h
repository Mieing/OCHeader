@class NSString, AWEChallengeModel, UIImageView, UILabel, UIView, AWEChallengeDetailAssociatedMediaInfoPanelView;
@protocol AWESearchFilmTVEpisodesProtocol;

@interface AWEChallengeDetailAssociatedMediaView : UIView

@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *showMoreButtonView;
@property (retain, nonatomic) UIImageView *showMoreImageView;
@property (retain, nonatomic) UILabel *showMoreLabel;
@property (retain, nonatomic) AWEChallengeDetailAssociatedMediaInfoPanelView *infoPanelView;
@property (retain, nonatomic) UIView<AWESearchFilmTVEpisodesProtocol> *episodesView;
@property (copy, nonatomic) NSString *groupID;

- (void)updateWithChallenge:(id)a0;
- (void)openEpisodePage:(id)a0;
- (void)showMoreClicked;
- (void)openEpisodeSelectPage;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
