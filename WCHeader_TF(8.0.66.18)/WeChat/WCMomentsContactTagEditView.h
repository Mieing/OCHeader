@class FavTagEditView, OrderedDictionary, NSString;
@protocol WCMomentsContactTagEditViewDelegate;

@interface WCMomentsContactTagEditView : UIView <FavTagEditViewDelegate>

@property (retain, nonatomic) FavTagEditView *tagEditView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (retain, nonatomic) OrderedDictionary *tagNameToTagData;
@property (weak, nonatomic) id<WCMomentsContactTagEditViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)initView;
- (void)updateWithTagDatas:(id)a0;
- (void)addTagData:(id)a0;
- (void)deleteTagData:(id)a0;
- (BOOL)isContainTagData:(id)a0;
- (id)tagNameToTagDataWithTagDatas:(id)a0;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)onDeleteButton:(id)a0;
- (BOOL)onTextFieldShouldBeginEditing:(id)a0;
- (void).cxx_destruct;

@end
