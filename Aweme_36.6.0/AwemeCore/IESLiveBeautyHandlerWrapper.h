@class IESLiveBeautyHandlerWrapperConfig, NSMutableDictionary, IESLiveBeautyHandlerContext, NSString, NSMutableArray;

@interface IESLiveBeautyHandlerWrapper : NSObject <IESLiveFaceBeautyService, IESLiveBeautyPanelContainerDataSource>

@property (retain, nonatomic) IESLiveBeautyHandlerWrapperConfig *wrapperConfig;
@property (retain, nonatomic) NSMutableDictionary *handlerDic;
@property (retain, nonatomic) NSMutableArray *handlerEntryItems;
@property (retain, nonatomic) IESLiveBeautyHandlerContext *handlerContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)entryItems;
- (void)removeAllHandler;
- (void)bindService;
- (id)initWithWrapperConfig:(id)a0;
- (id)createBeautyPanelContainer;
- (id)getBeautyHandlerWithType:(long long)a0;
- (void)rememberEffectiveValueFor:(id)a0;
- (void)recoverEffectiveValueFor:(id)a0;
- (id)setupHandlerContextWithScene:(long long)a0 diContext:(id)a1;
- (void)addHandlers:(id)a0 handlerDic:(id)a1;
- (id)applyingBeautyItems:(long long)a0;
- (void)addHandler:(id)a0 handlerDic:(id)a1;
- (void)removeHandlers:(id)a0;
- (void).cxx_destruct;
- (void)removeHandler:(id)a0;

@end
