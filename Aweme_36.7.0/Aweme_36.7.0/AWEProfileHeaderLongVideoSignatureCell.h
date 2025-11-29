@class NSString, AWEProfileHeaderLongVideoSignatureView, AWEProfileHeaderContext;

@interface AWEProfileHeaderLongVideoSignatureCell : UICollectionViewCell <AWEProfileHeaderLongVideoSignatureViewDelegate>

@property (retain, nonatomic) AWEProfileHeaderLongVideoSignatureView *longVideoSignatureView;
@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithHeaderContext:(id)a0;
- (void)updateLongVideoSignatureViewHiddenStatus;
- (void)addTapMoreInfoButtonTrackEvent;
- (void)signatureViewDidTapMoreIntroInfoButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
