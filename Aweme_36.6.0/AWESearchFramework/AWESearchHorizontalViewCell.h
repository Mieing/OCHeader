@class NSString, AWESearchAutoPlayHandler, UIView;
@protocol AWESearchHorizontalViewCellProtocol, AWESearchAutoPlayCardProtocol;

@interface AWESearchHorizontalViewCell : UICollectionViewCell <AWESearchAutoPlayCardProtocol>

@property (retain, nonatomic) NSString *reuseIdentifer;
@property (retain, nonatomic) UIView<AWESearchHorizontalViewCellProtocol, AWESearchAutoPlayCardProtocol> *horizontalContentView;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) AWESearchAutoPlayHandler *autoPlayHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentiferWithModel:(id)a0;

- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didResignActive;
- (void)layoutSubviews;
- (id)activeView;

@end
