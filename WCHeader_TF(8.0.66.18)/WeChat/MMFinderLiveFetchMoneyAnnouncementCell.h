@class NSString, MMFinderLiveFetchMoneyAnnouncementView;
@protocol MMFinderLiveFetchMoneyAnnouncementCellDelegate;

@interface MMFinderLiveFetchMoneyAnnouncementCell : WCTableViewNormalCellManager <MMFinderLiveFetchMoneyAnnouncementViewDelegate>

@property (retain, nonatomic) MMFinderLiveFetchMoneyAnnouncementView *announcementView;
@property (weak, nonatomic) id<MMFinderLiveFetchMoneyAnnouncementCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnnouncement:(id)a0 delegate:(id)a1 customHeight:(double)a2 width:(double)a3;
- (void)initCellConfig;
- (void)layoutUI;
- (void)clickMMFinderLiveFetchMoneyAnnouncementView:(id)a0;
- (void).cxx_destruct;

@end
