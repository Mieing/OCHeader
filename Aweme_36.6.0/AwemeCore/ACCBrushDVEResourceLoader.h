@class NSArray, NSString;

@interface ACCBrushDVEResourceLoader : NSObject <DVEResourceLoaderProtocol>

@property (retain, nonatomic) NSArray *brushUIColor;
@property (copy, nonatomic) NSArray *subtypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBrushColor;
- (void)brushColorModelWithCompletion:(id /* block */)a0;
- (void)brushResourceModelWithCompletion:(id /* block */)a0;
- (void)updateBrushWithResponse:(id)a0 completion:(id /* block */)a1;
- (void)requestBrushPanelWithStartTime:(double)a0 needUpdate:(BOOL)a1 completion:(id /* block */)a2;
- (id)getBasicBrushCategoryWithEffects:(id)a0;
- (id)buildBrushDVEResourceModelWithEffect:(id)a0;
- (BOOL)isSubtypeEnabled:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
