@class NSString, NSMutableDictionary;
@protocol BDVListEventProtocol;

@interface BDVScrollViewManager : BDVBaseManager <BDVScrollViewEventProtocol> {
    BOOL _bdv_itemIDForCell;
    BOOL _bdv_cellDidVisible;
    BOOL _bdv_cellDidDisplay;
    BOOL _bdv_cellDidEndDisplay;
}

@property (nonatomic) double lastScrollTime;
@property (nonatomic) BOOL delayCall;
@property (retain, nonatomic) NSMutableDictionary *metaDataDict;
@property (weak, nonatomic) id<BDVListEventProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTracker;
- (void)checkViewVisible;
- (void)endTracker;
- (id)subviewAndIndexPathFromContainerView:(id)a0;
- (void)checkSubviewsVisible:(id)a0;
- (void)throttleCheckViewVisible:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerBoundsInWindow:(id)a0;
- (id)sortIndexPathArray:(id)a0;
- (id)itemIDForCell:(id)a0 indexPath:(id)a1;
- (void)bdv_scrollViewDidScroll:(id)a0;
- (void)bdv_scrollViewContentSizeDidChange:(id)a0;
- (BOOL)cellNeedVisible:(id)a0 indexPath:(id)a1;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (id)view;

@end
