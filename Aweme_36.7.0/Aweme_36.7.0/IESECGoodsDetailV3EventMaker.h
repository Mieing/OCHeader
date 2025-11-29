@class NSString, NSMutableDictionary, NSDictionary, IESECGoodsDetailParameters, IESECOnceHelper;
@protocol IESECGoodsDetailContainerProtocol;

@interface IESECGoodsDetailV3EventMaker : NSObject

@property (readonly, nonatomic) id /* block */ once;
@property (readonly, nonatomic) IESECGoodsDetailV3EventMaker *base;
@property (readonly, nonatomic) IESECGoodsDetailV3EventMaker *shopAddition;
@property (readonly, nonatomic) id /* block */ livesdk_live_show;
@property (readonly, nonatomic) IESECGoodsDetailV3EventMaker *page_type;
@property (readonly, nonatomic) IESECGoodsDetailV3EventMaker *coupon_id;
@property (readonly, nonatomic) IESECGoodsDetailV3EventMaker *hostAppAddition;
@property (readonly, nonatomic) IESECGoodsDetailV3EventMaker *logExtraData;
@property (readonly, nonatomic) IESECGoodsDetailV3EventMaker *adParams;
@property (readonly, nonatomic) id /* block */ withBtmID;
@property (readonly, nonatomic) id /* block */ withBtmParams;
@property (readonly, nonatomic) id /* block */ withBstGroupType;
@property (readonly, nonatomic) IESECGoodsDetailV3EventMaker *removeTargetEntranceInfo;
@property (readonly, nonatomic) id /* block */ generateBtmParamsWithBtmAndHost;
@property (readonly, nonatomic) id /* block */ addEntranceInfo;
@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (nonatomic) BOOL ignore;
@property (retain, nonatomic) NSDictionary *adExtraParams;
@property (weak, nonatomic) id<IESECGoodsDetailContainerProtocol> container;
@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (copy, nonatomic) NSDictionary *entranceInfoTupleDict;
@property (retain, nonatomic) IESECOnceHelper *onceHelper;
@property (readonly, nonatomic) id /* block */ addDict;
@property (readonly, nonatomic) id /* block */ track;
@property (readonly, nonatomic) id /* block */ outputParams;
@property (readonly, nonatomic) NSDictionary *build;

+ (id)button_statusForParameter:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
