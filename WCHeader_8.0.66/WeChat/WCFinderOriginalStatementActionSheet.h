@protocol WCFinderOriginalStatementActionSheetDelegate;

@interface WCFinderOriginalStatementActionSheet : WCFinderCommonTitleActionSheet

@property (weak, nonatomic) id<WCFinderOriginalStatementActionSheetDelegate> finderDelegate;
@property (nonatomic) int commentScene;

+ (id)buildActionSheetByTitle:(id)a0 subTitle:(id)a1 rightButtonMsg:(id)a2 clickRightButtonBlock:(id /* block */)a3 leftButtonMsg:(id)a4 clickLeftButtonBlock:(id /* block */)a5 bindReportViewBlock:(id /* block */)a6;

- (double)appendBottomView:(id)a0 bottomLine:(double)a1;
- (void)onClickCancelBtn;
- (void)bindReportFromView:(id)a0 viewId:(id)a1 reportPolicy:(unsigned long long)a2;
- (void).cxx_destruct;

@end
