@class NSDictionary, AWENewPublishTableCell, NSString;
@protocol AWELiveAnnouncementFinishModelProtocol;

@interface AWEPostPageLiveAppointmentElement : AWEPostPageAnchorCheckCellElement <AWEPostPageAnchorProtocol, AWECommerceAnchorMessageProtocol>

@property (retain, nonatomic) AWENewPublishTableCell *liveAppointCell;
@property (retain, nonatomic) id<AWELiveAnnouncementFinishModelProtocol> announcementFinishModel;
@property (readonly, copy, nonatomic) NSDictionary *extras;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (id)liveModuleService;
- (id)p_trackParams;
- (void)elementAppear;
- (void)didSelectAnchorWithType:(long long)a0 anchorDismissBlock:(id /* block */)a1 enterFromType:(long long)a2;
- (void)setupUIForAnchor;
- (void)configPlaceholderUI;
- (void)refreshWithAnchorVM:(id)a0;
- (BOOL)canHandleAnchorType:(long long)a0;
- (void)cleanAnnouncementFinishModel;
- (id)liveAppointmentAnchorModel;
- (void)p_openAnnouncementPanel;
- (void)didSelectAnnouncement:(id)a0;
- (void)cancleSelectedArticle;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)cleanUp;
- (id)cell;
- (id)cellIdentifier;
- (void)didSelect;

@end
