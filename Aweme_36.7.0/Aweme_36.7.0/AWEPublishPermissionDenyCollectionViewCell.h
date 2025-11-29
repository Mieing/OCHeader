@class YYLabel, UIImageView, NSString;
@protocol AWEPublishPermissionDenyDelegate;

@interface AWEPublishPermissionDenyCollectionViewCell : UICollectionViewCell <UITextViewDelegate>

@property (retain, nonatomic) YYLabel *descLabel;
@property (retain, nonatomic) UIImageView *descImage;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *schemaName;
@property (copy, nonatomic) NSString *descTitle;
@property (nonatomic) BOOL isAddSpace;
@property (weak, nonatomic) id<AWEPublishPermissionDenyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configSchemaUI;
- (void)labelClick;
- (id)checkWidthShowNormal:(id)a0;
- (id)attributedAppendDot;
- (id)attributedImageString;
- (double)calculateYYLabelWidth:(id)a0;
- (double)getRightImageWidth;
- (void)updateCellWithPermission:(BOOL)a0 title:(id)a1 schema:(id)a2 schemaName:(id)a3;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellSize;
- (void)setupUI;

@end
