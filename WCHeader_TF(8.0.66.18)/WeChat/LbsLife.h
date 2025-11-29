@class NSString, NSMutableArray, SKBuiltinBuffer_t;

@interface LbsLife : WXPBGeneratedMessage {
    int iconIdxListMemoizedSerializedSize;
}

@property (retain, nonatomic) NSString *bid;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) float price;
@property (nonatomic) unsigned int iconIdxCount;
@property (retain, nonatomic) NSMutableArray *iconIdxList;
@property (nonatomic) unsigned int descCount;
@property (retain, nonatomic) NSMutableArray *descList;
@property (nonatomic) float rate;
@property (retain, nonatomic) NSString *link;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) SKBuiltinBuffer_t *ctx;
@property (retain, nonatomic) NSString *poiUrl;
@property (retain, nonatomic) SKBuiltinBuffer_t *weAppInfo;
@property (nonatomic) unsigned int showType;
@property (nonatomic) unsigned int showFlag;
@property (nonatomic) float distance;
@property (retain, nonatomic) NSString *buildingId;
@property (retain, nonatomic) NSString *floorName;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (retain, nonatomic) NSString *city;

+ (void)initialize;

@end
