@interface AWEClassroomImpl.ClassroomGuideInfoPanelView : DUXInfoPanel <DUXSheetDelegate> {
    void /* unknown type, empty encoding */ containerSheet;
    void /* unknown type, empty encoding */ actionBlock;
}

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (id)initWithImage:(id)a0 imageStyle:(long long)a1 title:(id)a2 detail:(id)a3 actions:(id)a4;
- (id)initWithImage:(id)a0 imageStyle:(long long)a1 title:(id)a2 detail:(id)a3 content:(id)a4 actions:(id)a5;
- (id)initWithImage:(id)a0 imageStyle:(long long)a1 title:(id)a2 detail:(id)a3 content:(id)a4 actions:(id)a5 enlargeType:(unsigned long long)a6;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
