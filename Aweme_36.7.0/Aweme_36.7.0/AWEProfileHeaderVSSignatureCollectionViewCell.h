@class NSString, AWEProfileVSInformationView;

@interface AWEProfileHeaderVSSignatureCollectionViewCell : UICollectionViewCell <AWEProfileHeaderCellProtocol>

@property (retain, nonatomic) AWEProfileVSInformationView *vsInfomationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithHeaderContext:(id)a0;
- (void)p_updateVsInfoWithContext:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
