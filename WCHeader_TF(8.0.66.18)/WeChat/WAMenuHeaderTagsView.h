@class NSArray, NSMutableArray;
@protocol WAMenuHeaderTagsViewDelegate;

@interface WAMenuHeaderTagsView : MMUIView

@property (copy, nonatomic) NSArray *tagItemList;
@property (retain, nonatomic) NSMutableArray *tagButtonList;
@property (weak, nonatomic) id<WAMenuHeaderTagsViewDelegate> delegate;
@property (nonatomic) long long maxWidth;

- (void)updateWithTagItemListIfNeeded:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (double)tagViewMaxWidth;
- (id)generateTagView:(id)a0;
- (void).cxx_destruct;

@end
