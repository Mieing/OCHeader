@class NSArray, NSMutableArray, NSDictionary;

@interface WCTagsView : UIView

@property (retain, nonatomic) NSMutableArray *tagViewArray;
@property (retain, nonatomic) NSArray *tagViewModelArray;
@property (retain, nonatomic) NSArray *visableTagViewModelArray;
@property (nonatomic) double viewWidth;
@property (retain, nonatomic) NSArray *tagsArray;
@property (retain, nonatomic) NSDictionary *dicTagIconUrl;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) id /* block */ tagClickAction;
@property (nonatomic) double tagHeight;
@property (nonatomic) double tagSpace;

+ (double)viewWidthForTags:(id)a0;
+ (double)viewWidthForTags:(id)a0 maxWidth:(id)a1;
+ (double)viewWidthForTags:(id)a0 tagHeight:(id)a1 tagSpace:(id)a2 maxWidth:(id)a3;
+ (double)p_viewWidthForTags:(id)a0 tagHeight:(double)a1 tagSpace:(double)a2 maxWidth:(double)a3 viewModelArray:(id)a4 visableViewModelArray:(id)a5 dicTagIconUrl:(id)a6;
+ (id)getTagTypeArrayWithParams:(id)a0 outMaxTagHeight:(double *)a1;

- (id)initWithTagHeight:(double)a0;
- (id)initWithTagHeight:(double)a0 tagSpace:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })updateTags:(id)a0;
- (struct CGSize { double x0; double x1; })updateTags:(id)a0 maxWidth:(double)a1;
- (struct CGSize { double x0; double x1; })updateTags:(id)a0 maxWidth:(double)a1 dicTagIconUrl:(id)a2;
- (struct CGSize { double x0; double x1; })getExpectedViewSize;
- (void)p_update;
- (void)p_updateViewModels;
- (void)p_updateViewUI;
- (void).cxx_destruct;

@end
