@class NSString, AWERLVirtualView, AWERLVirtualLabel, AWERLVirtualImageView;

@interface AWEUserWorkCellIconLabelStarAtlasTagLabelComponent_NEWAPI : AWEUserWorkCellBaseComponent <AWEUserWorkCellAlphaChangeProtocol, AWEUserWorkCellComponentProtocol>

@property (retain, nonatomic) AWERLVirtualView *virtualView;
@property (retain, nonatomic) AWERLVirtualImageView *iconViewVirtualView;
@property (retain, nonatomic) AWERLVirtualLabel *countLabelVirtualView;
@property (retain, nonatomic) AWERLVirtualView *starAtlasTagLabelVirtualView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithData:(id)a0 context:(id)a1;

- (id)buildVirtualView:(id)a0;
- (double)iconViewWidth;
- (void)changeAlpha:(double)a0;
- (struct CGSize { double x0; double x1; })iconImageSize:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 context:(id)a1;
- (id)labelFont;

@end
