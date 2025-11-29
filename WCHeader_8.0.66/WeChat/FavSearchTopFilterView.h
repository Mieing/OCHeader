@class NSArray, NSMutableArray;
@protocol FavSearchTopFilterViewDelegate;

@interface FavSearchTopFilterView : MMUIView {
    NSArray *m_types;
    NSArray *m_tags;
    NSMutableArray *m_titles;
}

@property (weak, nonatomic) id<FavSearchTopFilterViewDelegate> delegate;

- (id)initWithWidth:(double)a0;
- (void)updateWithWidth:(double)a0;
- (void)setTypes:(id)a0;
- (void)setTags:(id)a0;
- (void)updateView;
- (void)onClickBtn:(id)a0;
- (void)onExtendPanel:(id)a0;
- (void).cxx_destruct;

@end
