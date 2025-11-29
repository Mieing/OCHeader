@class NSTimer, NSMutableArray, NSString;
@protocol AWECommerceComponentContext;

@interface AWEAdDynamicFlashManager : HTSService <AWEAdDynamicFlashManager, AWECommerceComponentProtocol>

@property (retain, nonatomic) NSTimer *dynamicTimer;
@property (retain, nonatomic) NSMutableArray *blockArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;

+ (BOOL)canShowComponentWithContext:(id)a0;

- (void)dynamicFlash:(id)a0;
- (id)getCurrentPixelPlayerImageWithContext;
- (id)getLightColorList:(id)a0;
- (BOOL)setupTimer:(double)a0 block:(id /* block */)a1;
- (id)getDynamicColor;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
