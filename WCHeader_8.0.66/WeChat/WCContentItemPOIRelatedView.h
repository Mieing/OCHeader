@class WCContentItemPOIRelatedViewModel, UILabel, MMWebImageView;

@interface WCContentItemPOIRelatedView : WCContentItemBaseView

@property (retain, nonatomic) WCContentItemPOIRelatedViewModel *viewModel;
@property (retain, nonatomic) MMWebImageView *contentImageView;
@property (retain, nonatomic) UILabel *poiTitleLabel;
@property (retain, nonatomic) UILabel *poiDesclabel;

+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1;

- (id)initWithWCDataItem:(id)a0;
- (void)udpateSubViewsLayout;
- (void)throwUrlMessage;
- (void).cxx_destruct;

@end
