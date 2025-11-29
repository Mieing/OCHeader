@class NSString;
@protocol IESLivePopularGemService;

@interface IESLivePopularGemServiceWrapper : NSObject <IESLivePopularGemService>

@property (retain, nonatomic) id<IESLivePopularGemService> popularGemService;
@property (nonatomic) BOOL isShowingXiaoDian;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openLivePopularGemWithUrlPath:(id)a0 params:(id)a1 isAnchor:(BOOL)a2 backBaseView:(id)a3;
- (void)track:(id)a0 status:(long long)a1 extra:(id)a2;
- (id)getCommonParamsWith:(id)a0 context:(id)a1;
- (void)tapToolBarItemWith:(id)a0 context:(id)a1;
- (void)tapToolBarItemWith:(id)a0 context:(id)a1 externalParams:(id)a2;
- (id)initWithPopularGemService:(id)a0;
- (void).cxx_destruct;

@end
