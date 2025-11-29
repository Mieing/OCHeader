@class NSString, NSDictionary, NSMutableDictionary;

@interface AWEEcomImageSearchParamsContext : NSObject

@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) NSDictionary *immutableRequestParams;
@property (retain, nonatomic) NSMutableDictionary *mutableRequestParams;
@property (copy, nonatomic) NSDictionary *federationInfo;
@property (retain, nonatomic) NSMutableDictionary *generalPassParams;
@property (retain, nonatomic) NSMutableDictionary *clickedProductIdDict;
@property (retain, nonatomic) NSMutableDictionary *onlyOnceParams;
@property (retain, nonatomic) NSMutableDictionary *eachTimeParams;
@property (copy, nonatomic) NSString *searchEntrance;
@property (copy, nonatomic) NSDictionary *additionParams;
@property (retain, nonatomic) NSDictionary *clientExtra;
@property (copy, nonatomic) NSDictionary *lynxSSRProps;

- (void)updateChangedParamsWithIsLoadmore:(BOOL)a0 Cursor:(id)a1 ShowCount:(long long)a2 QueryImageUri:(id)a3 Detection:(id)a4 DetectionIndex:(id)a5 QueryParams:(id)a6 LogPassback:(id)a7 EnterFrom:(id)a8 PreviousSearchID:(id)a9 searchSource:(id)a10 GeneralGoodClickArea:(id)a11 AwemeId:(id)a12 EcomSearchPassThrough:(id)a13 EcomSearchAllPassThrough:(id)a14 SearchCellLevel:(id)a15 currentFormat:(id)a16 enterFromSecond:(id)a17;
- (id)getRequestParams;
- (void)buildUnChangedParamsWith:(id)a0;
- (void)constructExtraParameterWithDetectionIndex:(id)a0;
- (id)buildBFFLayerClientParams;
- (id)mergeFederationInfo:(id)a0 intoExtra:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)searchSessionID;

@end
