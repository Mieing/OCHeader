@class UILabel, NSString, AWEAwemeModel;

@interface AWEMVCardTitleResourceView : UIView <AWEDCFeedCellImageElementResourceViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configResourceWithAwemeModel:(id)a0 context:(id)a1;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)init;
- (void)didMoveToSuperview;
- (void)setupViews;

@end
