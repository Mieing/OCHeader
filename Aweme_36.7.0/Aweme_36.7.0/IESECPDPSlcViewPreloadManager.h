@class IESECGoodsDetailSliceManager, NSMutableArray;

@interface IESECPDPSlcViewPreloadManager : NSObject

@property (retain, nonatomic) NSMutableArray *preloadData;
@property (weak, nonatomic) IESECGoodsDetailSliceManager *sliceManager;
@property (nonatomic) BOOL needStopPreload;

- (void)stopPreload;
- (void)startPreload;
- (id)initWithSliceManager:(id)a0;
- (id)sliceViewWithGeckoURL:(id)a0;
- (void)initializePreloadData;
- (void).cxx_destruct;
- (void)free;

@end
