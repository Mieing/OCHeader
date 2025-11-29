@class IESECListKitCardPreloader, NSString, NSMutableArray, IESECWinContext;
@protocol IESECWinLynxCardService;

@interface IESECWinLynxPreloadService : NSObject <IESECWinLynxPreloadService>

@property (weak, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECListKitCardPreloader *preloader;
@property (retain, nonatomic) NSMutableArray *lynxSchemas;
@property (retain, nonatomic) id<IESECWinLynxCardService> lynxCardService;
@property (nonatomic) BOOL usePreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lynxCardProvider;
- (void)preloadLynxCardWithTabType:(unsigned long long)a0;
- (void)reportLynxPreloadResult:(BOOL)a0 itemType:(unsigned long long)a1;
- (BOOL)getUsePreload;
- (void)usePreload:(BOOL)a0 itemType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
