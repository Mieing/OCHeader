@class NSObject, AFDRelationButtonContext, AFDRelationButtonViewModel;
@protocol AFDRelationButtonViewModelDelegate;

@interface AFDRelationButton : AWEUIListCellActionButton

@property (retain, nonatomic) AFDRelationButtonViewModel *viewModel;
@property (weak, nonatomic) NSObject<AFDRelationButtonViewModelDelegate> *delegate;
@property (retain, nonatomic) AFDRelationButtonContext *context;

+ (id)defaultColorModel;

- (void)onButtonClicked;
- (void).cxx_destruct;
- (id)init;
- (void)refreshUI;
- (void)updateWithUser:(id)a0;

@end
