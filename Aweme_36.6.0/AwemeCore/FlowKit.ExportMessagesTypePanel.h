@interface FlowKit.ExportMessagesTypePanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ safeArea;
    void /* unknown type, empty encoding */ bgView;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ confirmButton;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ fromVC;
    void /* unknown type, empty encoding */ showChatTabBar;
    void /* unknown type, empty encoding */ inRequest;
    void /* unknown type, empty encoding */ conversationId;
    void /* unknown type, empty encoding */ msgItems;
    void /* unknown type, empty encoding */ botName;
    void /* unknown type, empty encoding */ botId;
    void /* unknown type, empty encoding */ exportActionId;
    void /* unknown type, empty encoding */ singleMode;
    void /* unknown type, empty encoding */ deepResearchReportId;
    void /* unknown type, empty encoding */ trackParams;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ types;
    void /* unknown type, empty encoding */ selectedType;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)handleGestureAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)confirmAction;

@end
