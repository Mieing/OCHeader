@class NSArray, AWEStoryColorChooseView, AWEVideoCoverEditorTextStyleCategoryView, UIView;

@interface AWEVideoCoverEditorTextFaceViewController : ACCTextTypeFaceViewController

@property (retain, nonatomic) AWEStoryColorChooseView *colorChooseView;
@property (copy, nonatomic) NSArray *categories;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) AWEVideoCoverEditorTextStyleCategoryView *colorView;
@property (retain, nonatomic) AWEVideoCoverEditorTextStyleCategoryView *styleView;
@property (retain, nonatomic) AWEVideoCoverEditorTextStyleCategoryView *alignmentView;
@property (nonatomic) BOOL isInputColorMode;

- (void)configUI;
- (void)reloadPanel;
- (void)updateWithColor:(id)a0 textStyle:(unsigned long long)a1 textAlignment:(long long)a2;
- (void)clearPanel;
- (id)initWithMode:(BOOL)a0 isCoverEdit:(BOOL)a1;
- (void)handleInputColorModel:(id)a0;
- (void)layoutUI:(id)a0 view:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;
- (void)prepareData;

@end
