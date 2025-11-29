@class NSDictionary, NSString, NSArray;

@interface AWEECOMIMBaseCardModel : AWEECOMIMBaseMsgModel <AWEECOMIMCardBaseProtocol, AWEECOMIMSubCardTrackProtocol>

@property (copy, nonatomic) NSDictionary *dynamicCardData;
@property (copy, nonatomic) NSString *serverParams;
@property (copy, nonatomic) NSDictionary *cardData;
@property (copy, nonatomic) NSDictionary *staticCardData;
@property (copy, nonatomic) NSDictionary *dynamicCardData;
@property (copy, nonatomic) NSArray *dynamicFields;
@property (nonatomic) unsigned long long cardDataBuildMode;
@property (nonatomic) long long cardState;
@property (copy, nonatomic) NSString *cardUrl;
@property (copy, nonatomic) NSString *btmCid;
@property (copy, nonatomic) NSString *btmDid;
@property (nonatomic) struct CGSize { double width; double height; } cardSize;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (copy, nonatomic) NSString *buttonNamesStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cardMsgModelClassFromMessage:(id)a0;
+ (Class)cardViewClass;
+ (void)registerCard:(Class)a0 type:(long long)a1 cardType:(id)a2;
+ (id)cardMessageTypeDict;
+ (void)registerAllCardModelClasses;
+ (id)cardTypeFromMessage:(id)a0;
+ (BOOL)isSoftDeleteFromMessage:(id)a0;
+ (Class)cellClass;

- (struct CGSize { double x0; double x1; })updateCardSizeWithWidth:(double)a0;
- (void)customInitBodyData;
- (void)updateModelWithData:(id)a0 encrypted:(BOOL)a1;
- (void)getCardDataWithCompletion:(id /* block */)a0;
- (id)getCardDataQuery;
- (id)buildServerParams;
- (void)updateModelWithDynamicData:(id)a0;
- (void)fetchCardDataWithCompletion:(id /* block */)a0;
- (void)fetchDynamicData;
- (id)unitBtmId;
- (BOOL)respondsToServerNotification:(id)a0 uuid:(id)a1 cardType:(id)a2;
- (void)trackSubCardTap:(id)a0 extraParams:(id)a1 unitBtmId:(id)a2 responder:(id)a3 needSetBcm:(BOOL)a4;
- (void)skipToUrl:(id)a0 andTrackSubcardTap:(id)a1 extraParams:(id)a2 unitBtmId:(id)a3 responder:(id)a4 needSetBcm:(BOOL)a5;
- (void)skipToUrl:(id)a0 andTrackSubCardTap:(id)a1 extraParams:(id)a2;
- (void)trackSubCardTapWithSubCardName:(id)a0 extraParams:(id)a1;
- (void)buildButtonAction:(id)a0;
- (void)updateDynamicFields:(id)a0;
- (void)updateDynamicCardData:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
