@class NSAttributedString, ACCRecordCaptionListCellUIConfig;

@interface ACCRecordCaptionCellViewModel : AWEBaseListCellViewModel

@property (retain, nonatomic) ACCRecordCaptionListCellUIConfig *uiConfig;
@property (nonatomic) long long selectState;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentSplitRect;
@property (copy, nonatomic) NSAttributedString *attrString;
@property (copy, nonatomic) NSAttributedString *selectedAttrString;
@property (nonatomic) struct CGSize { double width; double height; } cachedSize;
@property (nonatomic) long long customIndex;

- (void)updateSelectState:(long long)a0;
- (struct CGSize { double x0; double x1; })cellSizeForCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateAttrString;
- (void)clearCachedSize;
- (id)initWithCaption:(id)a0 uiConfig:(id)a1;
- (void)fontSizeDidChange;
- (void)updateCurrentSplitRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
