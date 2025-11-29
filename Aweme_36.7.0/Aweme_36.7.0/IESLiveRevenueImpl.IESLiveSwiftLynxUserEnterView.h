@interface IESLiveRevenueImpl.IESLiveSwiftLynxUserEnterView : IESLiveRevenueImpl.IESLiveSwiftPrivilegeEntryView <IESLivePrivilegeLynxPlayerViewProtocol> {
    void /* unknown type, empty encoding */ lynxUserEnterView;
    void /* unknown type, empty encoding */ node;
    void /* unknown type, empty encoding */ resourceComplete;
}

@property (nonatomic) BOOL lynxCreatedSuccess;
@property (nonatomic) BOOL isLynxFirstCreate;

- (void)didClickView;
- (void)updateWithEnterMessageNode:(id)a0;
- (void)didPlayFinish:(BOOL)a0 errorMsg:(id)a1;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
