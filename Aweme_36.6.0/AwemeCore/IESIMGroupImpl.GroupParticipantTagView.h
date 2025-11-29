@interface IESIMGroupImpl.GroupParticipantTagView : UIView <IESIMGroupParticipantTagViewProtocol> {
    void /* unknown type, empty encoding */ tagModel;
    void /* unknown type, empty encoding */ tagConfig;
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ icon;
    void /* unknown type, empty encoding */ title;
}

- (void)setupWithModel:(id)a0 config:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)refreshUI;
- (void)handleTap:(id)a0;

@end
