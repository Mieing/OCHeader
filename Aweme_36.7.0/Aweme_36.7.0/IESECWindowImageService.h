@class IESECWinContext, NSMutableSet, NSString;

@interface IESECWindowImageService : NSObject <IESECWindowImageService>

@property (weak, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) NSMutableSet *preloadImgs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProductImageTag:(id)a0 firstScreen:(BOOL)a1;
- (void)updateProductImageTagWithTabResponse:(id)a0 firstScreen:(BOOL)a1;
- (void)preloadFirstScreenProductImages:(id)a0;
- (void)preloadProductImages:(id)a0 curIdx:(long long)a1;
- (BOOL)p_preloadProductCoverImageIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
