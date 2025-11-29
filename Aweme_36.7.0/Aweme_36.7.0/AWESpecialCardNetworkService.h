@interface AWESpecialCardNetworkService : NSObject

+ (id)hasHomePageMallTabValue;
+ (void)commitSpecialCardDislikeWithBusinessID:(id)a0 cardID:(id)a1 mainContainerType:(id)a2 mainCardType:(id)a3 businessExtra:(id)a4 enterFrom:(id)a5 completion:(id /* block */)a6;
+ (void)commitSpecialCardClickWithBusinessID:(id)a0 cardID:(id)a1 mainContainerType:(id)a2 mainCardType:(id)a3 businessExtra:(id)a4 clickEventType:(long long)a5 enterFrom:(id)a6 completion:(id /* block */)a7;
+ (void)commitFeedCardStats:(unsigned long long)a0 model:(id)a1 enterFrom:(id)a2 extraParams:(id)a3 completion:(id /* block */)a4;
+ (void)requestSpecialCardWithBusinessID:(id)a0 businessParams:(id)a1 enterFrom:(id)a2 completion:(id /* block */)a3;
+ (void)requestByteLinkDetailSpecialCardWithBusinessID:(id)a0 awemeID:(id)a1 UUID:(id)a2 notifyType:(unsigned long long)a3 isEnterFront:(BOOL)a4 notifyExtra:(id)a5 enterFrom:(id)a6 completion:(id /* block */)a7;

@end
