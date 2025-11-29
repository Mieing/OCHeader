@interface IESECMallDeepFeedHelper : NSObject

+ (id)commonParamsForProductEventsWithCardModel:(id)a0 node:(id)a1;
+ (id)entranceInfoWithViewModel:(id)a0 extraParams:(id)a1 node:(id)a2;
+ (void)addEntranceInfoFromCardModel:(id)a0 entranceInfo:(id)a1;
+ (void)favoriteActionButtonDidTapWithProduct:(id)a0 node:(id)a1 containerView:(id)a2 completion:(id /* block */)a3;
+ (id)buildEntranceInfoWithCardModel:(id)a0 node:(id)a1 extraEntranceInfo:(id)a2 index:(long long)a3;

@end
