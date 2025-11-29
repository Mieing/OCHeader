@class NSDictionary, IESECECTagGroupAttributes, IESECECTagGroupView;

@interface IESECECTagGroupWrapperView : UIView

@property (retain, nonatomic) NSDictionary *tagGroupData;
@property (retain, nonatomic) IESECECTagGroupAttributes *tagGroupAttrs;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) IESECECTagGroupView *ecTagGroupView;
@property (retain, nonatomic) id pendingRenderID;

- (void)updateWithTagGroupData:(id)a0 attributes:(id)a1 completion:(id /* block */)a2;
- (id)getShownTagInfoList;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
