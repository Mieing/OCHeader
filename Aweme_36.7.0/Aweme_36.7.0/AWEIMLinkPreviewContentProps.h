@class AWEIMMessageViewModel, AWEIMLinkPreviewDataController;

@interface AWEIMLinkPreviewContentProps : AWEIMUIViewPresenterProps

@property (weak, nonatomic) AWEIMMessageViewModel *viewModel;
@property (copy, nonatomic) id /* block */ tapAction;
@property (weak, nonatomic) AWEIMLinkPreviewDataController *dataController;

- (void).cxx_destruct;

@end
