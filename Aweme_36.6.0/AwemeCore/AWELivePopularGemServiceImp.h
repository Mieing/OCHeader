@class NSString;

@interface AWELivePopularGemServiceImp : NSObject <IESLivePopularGemService>

@property (nonatomic) BOOL isShowingXiaoDian;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitorDouPlusLiveShowWithURLString:(id)a0 webViewError:(id)a1;
- (void)openLivePopularGemWithUrlPath:(id)a0 params:(id)a1 isAnchor:(BOOL)a2 backBaseView:(id)a3;
- (void)track:(id)a0 status:(long long)a1 extra:(id)a2;
- (id)getCommonParamsWith:(id)a0 context:(id)a1;
- (void)tapToolBarItemWith:(id)a0 context:(id)a1;
- (void)tapToolBarItemWith:(id)a0 context:(id)a1 externalParams:(id)a2;
- (void)openLivePopularGemWithUrlPath:(id)a0 params:(id)a1 isAnchor:(BOOL)a2 backBaseView:(id)a3 externalParams:(id)a4;

@end
