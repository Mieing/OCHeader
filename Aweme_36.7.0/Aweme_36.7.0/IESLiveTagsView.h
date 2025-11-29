@class IESLiveTagsLayout;
@protocol IESLiveTagsViewDataSource;

@interface IESLiveTagsView : UIView

@property (weak, nonatomic) id<IESLiveTagsViewDataSource> dataSource;
@property (retain, nonatomic) IESLiveTagsLayout *layout;

- (id)itemsOfTags;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(id)a1;

@end
