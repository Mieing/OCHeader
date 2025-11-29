@class NSString, AWESearchAutoPlayHandler, UIView;
@protocol AWESearchStackContentViewProtocol, AWESearchAutoPlayCardProtocol;

@interface AWESearchStackCell : UICollectionViewCell <AWESearchAutoPlayCardProtocol>

@property (retain, nonatomic) UIView<AWESearchStackContentViewProtocol, AWESearchAutoPlayCardProtocol> *stackContentView;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) AWESearchAutoPlayHandler *autoPlayHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifierWithModel:(id)a0;

- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didResignActive;
- (void)layoutSubviews;
- (void)setHorizontalContentView:(id)a0;
- (id)activeView;

@end
