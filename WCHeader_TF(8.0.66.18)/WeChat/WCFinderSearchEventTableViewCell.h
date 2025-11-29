@class UILabel, NSString, MMWebImageView;

@interface WCFinderSearchEventTableViewCell : WCFinderTableViewCell <MMWebImageViewDelegate>

@property (retain, nonatomic) UILabel *eventNameLabel;
@property (retain, nonatomic) UILabel *participateNumLabel;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)updateWithEventInfo:(id)a0;
- (void)updateLayout;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
