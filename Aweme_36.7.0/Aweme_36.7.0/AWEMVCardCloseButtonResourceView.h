@class NSString, AWEDCFeedPageContext, DUXBaseImageView, AWEAwemeModel;

@interface AWEMVCardCloseButtonResourceView : UIView <AWEDCFeedCellImageElementResourceViewProtocol>

@property (retain, nonatomic) DUXBaseImageView *closeIconView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configResourceWithAwemeModel:(id)a0 context:(id)a1;
- (void)onClickCloseBtn:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;

@end
