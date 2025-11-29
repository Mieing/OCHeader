@class MMUILabel, Announcement, MMUIImageView;
@protocol MMFinderLiveFetchMoneyAnnouncementViewDelegate;

@interface MMFinderLiveFetchMoneyAnnouncementView : MMUIView

@property (retain, nonatomic) Announcement *announcement;
@property (weak, nonatomic) id<MMFinderLiveFetchMoneyAnnouncementViewDelegate> delegate;
@property (retain, nonatomic) MMUIImageView *iconView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIImageView *arrowImageView;

- (id)initWithAnnouncement:(id)a0 delegate:(id)a1 width:(double)a2 height:(double)a3;
- (void)initSubviews;
- (void)layoutUI;
- (void)layoutCanClick;
- (void)layoutCannotClick;
- (void)initConfig;
- (void)clickNotifyView;
- (void).cxx_destruct;

@end
