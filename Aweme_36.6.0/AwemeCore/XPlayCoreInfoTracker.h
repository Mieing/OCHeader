@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface XPlayCoreInfoTracker : NSObject

@property (nonatomic) int joinTime;
@property (nonatomic) int postTime;
@property (nonatomic) int joinNum;
@property (nonatomic) int rtcStreamTime;
@property (nonatomic) int rtcDelayTime;
@property (nonatomic) double ts;
@property (copy, nonatomic) NSDictionary *setting;
@property (retain, nonatomic) NSMutableArray *postCoreData;
@property (retain, nonatomic) NSMutableDictionary *joinCoreData;
@property (retain, nonatomic) NSMutableDictionary *emptyJoinCoreDataModel;
@property (retain, nonatomic) NSMutableArray *bufferIndex;
@property (retain, nonatomic) NSMutableArray *bufferJoinCoreData;
@property (retain, nonatomic) NSMutableDictionary *CommonPrams;

+ (id)sharedInstance;

- (void)setCommonPramsWithConfiguration:(id)a0 withRoomID:(id)a1;
- (void)postCoreInfoWithCategory:(id)a0 coreData:(id)a1;
- (void)configWithSetting;
- (void)fastPostData:(id)a0 data:(id)a1;
- (void)realAddData;
- (void)addDataWithCategoryInRtcTime:(id)a0 coreData:(id)a1;
- (void)realPostData;
- (void)initDataModel;
- (void).cxx_destruct;
- (void)clearBuffer;

@end
