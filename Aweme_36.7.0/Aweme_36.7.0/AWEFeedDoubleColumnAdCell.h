@interface AWEFeedDoubleColumnAdCell : AWEDCFeedBaseCell <AWEAdFeedDoubleColumnCellProtocol> {
    void /* function */ didTappedBlock;
}

@property (nonatomic, copy) id /* block */ didTappedBlock;

+ (id)elementArray;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
