@class NSString, IESECMallShopMomentContext;

@interface IESECMallShopMomentScrollService : NSObject <UIScrollViewDelegate, IESECMallShopMomentScrollService>

@property (nonatomic) double beginDraggingOffsetY;
@property (retain, nonatomic) IESECMallShopMomentContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidScrollToTop:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithContext:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
