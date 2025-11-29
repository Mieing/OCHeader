@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWEBasicDescriptionTextView : UITextView <NSLayoutManagerDelegate>

@property (retain, nonatomic) NSMutableDictionary *highlightDic;
@property (retain, nonatomic) NSMutableArray *UIcontrolArr;
@property (retain, nonatomic) NSMutableArray *AttachmentArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hashtagClickableAreaChange;
- (BOOL)slideOptimize;
- (void)handleClickAction:(id)a0;
- (void)controlClick:(id)a0;
- (BOOL)refreshOptimize;
- (void)removeUIControlAndAttributeView;
- (void)addUIControlAndAttributeView;
- (void)layoutManager:(id)a0 didCompleteLayoutForTextContainer:(id)a1 atEnd:(BOOL)a2;
- (void).cxx_destruct;
- (void)setAttributedText:(id)a0;
- (void)layoutManagerDidInvalidateLayout:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;

@end
