@class LSIMEvaluationView, LSIMMessageEvaluateCellVM, NSString;

@interface LSIMMessageEvaluateCellView : LSIMChatDetailBaseCellView <LSIMEvaluationViewDelegate>

@property (retain, nonatomic) LSIMMessageEvaluateCellVM *cellVM;
@property (retain, nonatomic) LSIMEvaluationView *evaluationView;
@property (nonatomic) BOOL isBindingVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithCellVM:(id)a0;
- (void)evaluationExpired;
- (void)evaluationResultDidChanged:(id)a0 isChangingMainRate:(BOOL)a1 completion:(id /* block */)a2;
- (void)evaluationViewHeightDidChangedNeedShowFull:(BOOL)a0;
- (void)setupContainerView;
- (void).cxx_destruct;

@end
