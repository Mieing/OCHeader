@class AWEIMOfficialContentFoldableTextView, AWENotificationModelNew, UILabel, UIView;

@interface AWEIMOfficialContentDetailCardView : UIView

@property (retain, nonatomic) AWENotificationModelNew *model;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UIView *textsContainerView;
@property (retain, nonatomic) AWEIMOfficialContentFoldableTextView *foldableTextView;

- (void)configWithModel:(id)a0 context:(id)a1 needTrackEvent:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
