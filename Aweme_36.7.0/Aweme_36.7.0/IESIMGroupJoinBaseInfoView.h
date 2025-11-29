@interface IESIMGroupJoinBaseInfoView : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ groupAvatar;
    void /* unknown type, empty encoding */ groupNameContainer;
    void /* unknown type, empty encoding */ groupName;
    void /* unknown type, empty encoding */ groupMemberCount;
    void /* unknown type, empty encoding */ groupDesc;
    void /* unknown type, empty encoding */ groupOwnerInfoContainer;
    void /* unknown type, empty encoding */ groupOwnerTitle;
    void /* unknown type, empty encoding */ groupOwnerName;
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)didTapOwnerName;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
