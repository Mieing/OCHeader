@class NSString, NSArray, AWEPOILynxPreloadManager, DitoRunLoopDispatch;

@interface AWEGoodsDetailPreloadManager : NSObject

@property (nonatomic) BOOL setted;
@property (retain, nonatomic) AWEPOILynxPreloadManager *lynxPreloadManager;
@property (retain, nonatomic) NSString *channel;
@property (retain, nonatomic) NSArray *urlSchemes;
@property (retain, nonatomic) DitoRunLoopDispatch *runLoopDispatch;

+ (id)sharedInstance;

- (void)preloadWithBizCode:(id)a0;
- (void)reportTrackWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithContext:(id)a0;

@end
