@class IESECServiceProxy, IESECWinAuthorObject;
@protocol IESECWinMainScrollService, IESECWinFeedService, IESECWinSplitService;

@interface IESECWinAuthorCellController : IESECWinAuthorSectionController {
    long long _section;
}

@property (retain, nonatomic) IESECWinAuthorObject *object;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedService> *feedService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinMainScrollService> *scrollService;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (void)configCell;
- (double)heightForModel:(id)a0 itemWidth:(double)a1 bffItemData:(id)a2;
- (void)setCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 withSectionID:(id)a2 updateRectBlock:(id /* block */)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCustomCellFrameWithSectionID:(id)a0 withEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)willDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (void).cxx_destruct;
- (void)setSection:(long long)a0;
- (long long)section;
- (void)updateCell;

@end
