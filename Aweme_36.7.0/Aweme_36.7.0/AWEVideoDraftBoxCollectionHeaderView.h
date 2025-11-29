@class UIButton, UILabel, AWEVideoDraftBoxCollectionViewController, AWEVideoDraftBoxCollectionDataSource;
@protocol AWEVideoDraftBoxCollectionHeaderViewDelegate;

@interface AWEVideoDraftBoxCollectionHeaderView : UIView

@property (weak, nonatomic) AWEVideoDraftBoxCollectionViewController *vc;
@property (weak, nonatomic) AWEVideoDraftBoxCollectionDataSource *dataSource;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *closeTipsButton;
@property (weak, nonatomic) id<AWEVideoDraftBoxCollectionHeaderViewDelegate> delegate;

- (void)closeTipsButtonAction:(id)a0;
- (id)initWithDraftVC:(id)a0 dataSource:(id)a1;
- (BOOL)isDidClickClosed;
- (void)setDidClickClosed;
- (id)tipContent;
- (void).cxx_destruct;

@end
