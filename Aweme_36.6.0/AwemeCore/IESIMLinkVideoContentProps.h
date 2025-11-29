@class AWEIMMessageViewModel, AWEIMLinkPreviewDataController;

@interface IESIMLinkVideoContentProps : AWEIMUIViewPresenterProps

@property (weak, nonatomic) AWEIMMessageViewModel *viewModel;
@property (weak, nonatomic) AWEIMLinkPreviewDataController *dataController;
@property (copy, nonatomic) id /* block */ tapAction;

- (void).cxx_destruct;

@end
