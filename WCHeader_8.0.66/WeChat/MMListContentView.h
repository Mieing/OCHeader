@class UIStackView;
@protocol MMListContentUIDelegate, MMListContentDataSource;

@interface MMListContentView : UIView

@property (retain, nonatomic) UIStackView *bkgStack;
@property (weak, nonatomic) id<MMListContentDataSource> dataSource;
@property (weak, nonatomic) id<MMListContentUIDelegate> uiDelegate;

- (id)initWithDataSource:(id)a0 uiDelegate:(id)a1;
- (void)initbkgStack;
- (void)addCells;
- (id)cellWithConfig:(id)a0;
- (void).cxx_destruct;

@end
