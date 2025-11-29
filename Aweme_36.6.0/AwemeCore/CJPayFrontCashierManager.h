@class NSMutableArray;

@interface CJPayFrontCashierManager : NSObject

@property (retain, nonatomic) NSMutableArray *mutableControllers;

+ (id)shared;

- (void)bindCardWithCommonModel:(id)a0;
- (void)p_gotoFrontCardListViewControllerWithModel:(id)a0;
- (void)chooseCardWithCommonModel:(id)a0;
- (void).cxx_destruct;

@end
