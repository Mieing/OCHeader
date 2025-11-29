@class UIStackView, UIImageView, IESLiveUserCardTagsView, IESLiveUserCardAuthInfosView, IESLiveUserCardStore;

@interface IESLiveMyLivePersonalInfosView : IESLiveUserCardPersonalInfosView

@property (retain, nonatomic) IESLiveUserCardAuthInfosView *authView;
@property (retain, nonatomic) UIStackView *introAndAnnouncement;
@property (retain, nonatomic) IESLiveUserCardTagsView *tagsView;
@property (retain, nonatomic) UIStackView *container;
@property (retain, nonatomic) UIImageView *openIndicator;
@property (nonatomic) BOOL isOpen;
@property (retain, nonatomic) IESLiveUserCardStore *store;

- (void)didSetAttachingDIContext;
- (id)createAnnouncementLabel;
- (id)createIntroductionLabel;
- (id)createMyLiveTagsView;
- (void)openIndicatorTapped:(id)a0;
- (id)createTagsView;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)setup;

@end
