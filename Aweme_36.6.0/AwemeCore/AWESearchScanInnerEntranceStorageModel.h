@class NSString, AWESearchScanInnerEntranceShowInfoModel, NSMutableDictionary;

@interface AWESearchScanInnerEntranceStorageModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL foreverShield;
@property (retain, nonatomic) AWESearchScanInnerEntranceShowInfoModel *currentDayShowInfoDic;
@property (retain, nonatomic) AWESearchScanInnerEntranceShowInfoModel *firstDayShowInfoDic;
@property (retain, nonatomic) NSMutableDictionary *entranceShowTimesTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentDayShowInfoDicJSONTransformer;
+ (id)firstDayShowInfoDicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
