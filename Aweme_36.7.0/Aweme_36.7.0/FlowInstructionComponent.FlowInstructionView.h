@interface FlowInstructionComponent.FlowInstructionView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ responderView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ inAdvancedEditing;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ isPanelShown;
    void /* unknown type, empty encoding */ lastFrame;
    void /* unknown type, empty encoding */ maxViewHeight;
    void /* unknown type, empty encoding */ handleAttchmentAction;
    void /* unknown type, empty encoding */ cancelAttachmentUploadAction;
    void /* unknown type, empty encoding */ titleView;
    void /* unknown type, empty encoding */ titleIconView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLbl;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lineView;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)flow_trackParametersWith:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;

@end
