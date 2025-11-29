@class NSArray, NSString;

@interface CECMomentDVEResourceLoader : NSObject <DVEResourceLoaderProtocol>

@property (retain, nonatomic) NSArray *brushUIColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBrushColor;
- (void)updateBrushEffects:(id)a0 completion:(id /* block */)a1;
- (void)brushColorModelWithCompletion:(id /* block */)a0;
- (void)brushResourceModelWithCompletion:(id /* block */)a0;
- (void)brushBackgroundImageResourceModelWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
