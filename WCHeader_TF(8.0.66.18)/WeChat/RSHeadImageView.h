@class NSString, CContact, UIImageView, RadarSearchMember, UILabel, MMHeadImageView;
@protocol RSHeadImageViewDelegate;

@interface RSHeadImageView : MMUIView {
    UILabel *_displayNameWhite;
    UIImageView *_normalBg;
    UIImageView *_statusBGView;
    UIImageView *_statusView;
    UIImageView *_selectedView;
}

@property (weak, nonatomic) id<RSHeadImageViewDelegate> delegate;
@property (retain, nonatomic) MMHeadImageView *imageView;
@property (retain, nonatomic) RadarSearchMember *member;
@property (nonatomic) int status;
@property (retain, nonatomic) NSString *verifyTicket;
@property (nonatomic) int m_iPointIndex;
@property (retain, nonatomic) CContact *m_contact;

+ (struct CGSize { double x0; double x1; })getHeadImageSize;

- (id)initWithRadarSearchMember:(id)a0;
- (void)initView;
- (void)initBackgroundView;
- (void)initHeadImageView;
- (void)updateStatusView;
- (void)doStatusPopupAnimation;
- (void)afterStatusViewHide;
- (void)hideStatusView;
- (void)showStatusView;
- (void)animationShowDidStop;
- (void)initStatusView;
- (void)setRemarkName:(id)a0;
- (id)getDisplayName;
- (id)genDisplayNameLabel;
- (void)initDisplayNameView;
- (void)OnClickHeadImageView;
- (void).cxx_destruct;

@end
