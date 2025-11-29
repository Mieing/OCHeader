@class UILabel, UIImageView, UIView;

@interface AWESearchScanResultsEmptyView : UIView

@property (retain, nonatomic) UILabel *firstLabel;
@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) UIView *retryView;
@property (nonatomic) unsigned long long emptyStatus;
@property (retain, nonatomic) UILabel *retryLabel;
@property (retain, nonatomic) UIImageView *iconImage;
@property (copy, nonatomic) id /* block */ returnLastPageBlock;
@property (copy, nonatomic) id /* block */ retryRequestDataBlock;

- (void)configUI;
- (void)updateEmptyViewWithStatus:(unsigned long long)a0 openSearchPage:(id)a1;
- (void)clickRetryBtn;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)resume;

@end
