@class NSArray, NSString, MMUIView, MJPageViewCursorView;
@protocol MJPageViewDataSource, MJPageViewInnerProtocol;

@interface MJPageViewTitleView : MMUIView <MJPageViewItemProtocol>

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) MJPageViewCursorView *cursor;
@property (nonatomic) double progress;
@property (weak, nonatomic) id<MJPageViewDataSource> dataSource;
@property (weak, nonatomic) id<MJPageViewInnerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadData;
- (void)didTappedTitleItem:(id)a0;
- (void)changeSelectedFrom:(long long)a0 to:(long long)a1 animated:(BOOL)a2;
- (void)changeCursorProgress:(double)a0;
- (void).cxx_destruct;

@end
