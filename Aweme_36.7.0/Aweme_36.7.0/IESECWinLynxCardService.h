@class NSString, IESECServiceProxy, NSDictionary, NSMutableArray, IESECWinContext;
@protocol IESECWinGoodsService;

@interface IESECWinLynxCardService : NSObject <IESECListCardsContextDelegate, IESECWinLynxCardService> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableArray *_instanceBridges;
}

@property (weak, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECServiceProxy<IESECWinGoodsService> *goodsService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ itemNeedRemoved;
@property (copy, nonatomic) id /* block */ itemNeedReload;
@property (nonatomic) BOOL isUseLynxCard;
@property (retain, nonatomic) NSDictionary *forwardEventDic;

+ (id)getSSRApiVersion;

- (void)currentCardsWriteAlogMethodName:(id)a0 paramModel:(id)a1 result:(id)a2 context:(id)a3;
- (id)currentListContextIdForCards;
- (id)instanceBridges;
- (id)currentEnvIdentifier;
- (id)customConfigWithLynxData:(id)a0 tabLayout:(unsigned long long)a1;
- (id)globalPropsExtraWithItemType:(unsigned long long)a0 trackContextExtra:(id)a1 extra:(id)a2;
- (void)registerWindowInstranceBridges;
- (void)registerInstranceBridge:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;
- (id)trackContext:(unsigned long long)a0;

@end
