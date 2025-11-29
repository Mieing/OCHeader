@class NSString, NSMutableDictionary, NSDictionary, UIResponder, NSArray;

@interface IESECBTMContextV2 : NSObject

@property (retain, nonatomic) NSMutableDictionary *bcmUnitParamsPrivate;
@property (copy, nonatomic) NSString *btmInfo;
@property (copy, nonatomic) NSDictionary *bcmDescription;
@property (weak, nonatomic) UIResponder *host;
@property (copy, nonatomic) NSArray *targetPages;
@property (readonly, copy, nonatomic) NSDictionary *bcmUnitParams;

+ (id)contextWithBtmInfo:(id)a0 host:(id)a1 bcmDescription:(id)a2;

- (void)appendBcmUnitParamsBiz:(id)a0 params:(id)a1;
- (void)setBtmInfoWithCode:(id)a0 index:(id)a1;
- (void)appendAllBcmUnitParams:(id)a0;
- (void)appendPageShowUnitParams:(id)a0;
- (void)appendEcomEntranceUnitParams:(id)a0;
- (void)willJumpToNextPage;
- (id)obtainEventBtmParamsWithEventName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
