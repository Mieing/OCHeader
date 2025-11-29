@class SnsServerConfig, NSString, SKBuiltinBuffer_t, SnsDragon2024Info, NSMutableArray, BaseResponse;

@interface SnsTimeLineResponse : WXPBGeneratedMessage {
    int idListForCheckUnreadMemoizedSerializedSize;
    int idFlagListForCheckUnreadMemoizedSerializedSize;
}

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *firstPageMd5;
@property (nonatomic) unsigned int objectCount;
@property (retain, nonatomic) NSMutableArray *objectList;
@property (nonatomic) unsigned int newRequestTime;
@property (nonatomic) unsigned int objectCountForSameMd5;
@property (nonatomic) unsigned int controlFlag;
@property (retain, nonatomic) SnsServerConfig *serverConfig;
@property (nonatomic) unsigned int advertiseCount;
@property (retain, nonatomic) NSMutableArray *advertiseList;
@property (retain, nonatomic) SKBuiltinBuffer_t *session;
@property (nonatomic) unsigned int recCount;
@property (retain, nonatomic) NSMutableArray *recList;
@property (nonatomic) unsigned int delAdvertiseCount;
@property (retain, nonatomic) NSMutableArray *delAdvertiseList;
@property (nonatomic) unsigned int countForCheckUnread;
@property (retain, nonatomic) NSMutableArray *idListForCheckUnread;
@property (retain, nonatomic) NSMutableArray *idFlagListForCheckUnread;
@property (retain, nonatomic) SKBuiltinBuffer_t *weiShangInfo;
@property (nonatomic) unsigned int advertiseOperationCount;
@property (retain, nonatomic) NSMutableArray *adOpList;
@property (nonatomic) unsigned long long adSessionId;
@property (retain, nonatomic) SnsDragon2024Info *snsDragon2024Info;
@property (nonatomic) unsigned int realWsversion;
@property (retain, nonatomic) SKBuiltinBuffer_t *wssessionBuf;

+ (void)initialize;

- (void)setWssessionBuf:(id)a0;
- (id)wssessionBuf;
- (void)setRealWsversion:(unsigned int)a0;
- (unsigned int)realWsversion;
- (void)setSnsDragon2024Info:(id)a0;
- (id)snsDragon2024Info;
- (void)setAdSessionId:(unsigned long long)a0;
- (unsigned long long)adSessionId;
- (void)setAdOpList:(id)a0;
- (id)adOpList;
- (void)setAdvertiseOperationCount:(unsigned int)a0;
- (unsigned int)advertiseOperationCount;
- (void)setWeiShangInfo:(id)a0;
- (id)weiShangInfo;
- (void)setIdFlagListForCheckUnread:(id)a0;
- (id)idFlagListForCheckUnread;
- (void)setIdListForCheckUnread:(id)a0;
- (id)idListForCheckUnread;
- (void)setCountForCheckUnread:(unsigned int)a0;
- (unsigned int)countForCheckUnread;
- (void)setDelAdvertiseList:(id)a0;
- (id)delAdvertiseList;
- (void)setDelAdvertiseCount:(unsigned int)a0;
- (unsigned int)delAdvertiseCount;
- (void)setRecList:(id)a0;
- (id)recList;
- (void)setRecCount:(unsigned int)a0;
- (unsigned int)recCount;
- (void)setSession:(id)a0;
- (id)session;
- (void)setAdvertiseList:(id)a0;
- (id)advertiseList;
- (void)setAdvertiseCount:(unsigned int)a0;
- (unsigned int)advertiseCount;
- (void)setServerConfig:(id)a0;
- (id)serverConfig;
- (void)setControlFlag:(unsigned int)a0;
- (unsigned int)controlFlag;
- (void)setObjectCountForSameMd5:(unsigned int)a0;
- (unsigned int)objectCountForSameMd5;
- (void)setNewRequestTime:(unsigned int)a0;
- (unsigned int)newRequestTime;
- (void)setObjectList:(id)a0;
- (id)objectList;
- (void)setObjectCount:(unsigned int)a0;
- (unsigned int)objectCount;
- (void)setFirstPageMd5:(id)a0;
- (id)firstPageMd5;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;
- (id)shortDebugString;

@end
