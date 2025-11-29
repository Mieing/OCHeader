@class NSString, UIImageView, UILabel, UIView;
@protocol AWEWatchLaterFeedEntryViewDelegate;

@interface AWEWatchLaterFeedEntryView : UIView <AWEWatchLaterFeedEntryViewProtocol>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (weak, nonatomic) id<AWEWatchLaterFeedEntryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void)didTapEntryView:(id)a0;
- (BOOL)fixLandscapeElderMode;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })viewSize;
- (id)init;
- (void)dealloc;
- (void)updateContent:(id)a0;
- (void)initUI;

@end
