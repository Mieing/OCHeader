@class UILabel, NSArray, IESLiveTagsView;

@interface IESLiveTagsLayout : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) UILabel *caculateLable;
@property (weak, nonatomic) IESLiveTagsView *view;
@property (weak, nonatomic) NSArray *items;

- (struct CGSize { double x0; double x1; })itemSizeFor:(id)a0;
- (void)refreshLayoutWithContainerWidth:(double)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSize;

@end
