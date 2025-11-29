@class SKBuiltinBuffer_t, NSString, OpenSDKInfo, SnsWeAppInfo, BaseRequest, SnsExtStatData, TwitterInfo, SnsPostOperationFields, SnsPostCtocUploadInfo, NSMutableArray, CanvasInfo;

@interface SnsPostRequest : WXPBGeneratedMessage {
    int blackContactTagIdListMemoizedSerializedSize;
    int groupContactTagIdListMemoizedSerializedSize;
}

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinBuffer_t *objectDesc;
@property (nonatomic) unsigned int withUserListCount;
@property (retain, nonatomic) NSMutableArray *withUserList;
@property (nonatomic) unsigned int privacy;
@property (nonatomic) unsigned int syncFlag;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) unsigned int postBgimgType;
@property (nonatomic) unsigned int groupCount;
@property (retain, nonatomic) NSMutableArray *groupIds;
@property (nonatomic) unsigned int objectSource;
@property (nonatomic) unsigned long long referId;
@property (nonatomic) unsigned int blackListCount;
@property (retain, nonatomic) NSMutableArray *blackList;
@property (retain, nonatomic) TwitterInfo *twitterInfo;
@property (nonatomic) unsigned int groupUserCount;
@property (retain, nonatomic) NSMutableArray *groupUser;
@property (retain, nonatomic) SnsPostCtocUploadInfo *ctocUploadInfo;
@property (retain, nonatomic) SnsPostOperationFields *snsPostOperationFields;
@property (retain, nonatomic) SKBuiltinBuffer_t *poiInfo;
@property (retain, nonatomic) NSString *fromScene;
@property (retain, nonatomic) CanvasInfo *canvasInfo;
@property (nonatomic) unsigned int mediaInfoCount;
@property (retain, nonatomic) NSMutableArray *mediaInfo;
@property (retain, nonatomic) SnsWeAppInfo *weAppInfo;
@property (retain, nonatomic) SKBuiltinBuffer_t *clientCheckData;
@property (retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo;
@property (retain, nonatomic) OpenSDKInfo *openSdkinfo;
@property (nonatomic) unsigned int withChatroomListCount;
@property (retain, nonatomic) NSMutableArray *withChatroomList;
@property (nonatomic) unsigned int withTaUserListCount;
@property (retain, nonatomic) NSMutableArray *withTaUserList;
@property (retain, nonatomic) NSString *reportData;
@property (retain, nonatomic) SnsExtStatData *extStatData;
@property (nonatomic) unsigned int blackContactTagIdListCount;
@property (retain, nonatomic) NSMutableArray *blackContactTagIdList;
@property (nonatomic) unsigned int groupContactTagIdListCount;
@property (retain, nonatomic) NSMutableArray *groupContactTagIdList;
@property (retain, nonatomic) SKBuiltinBuffer_t *snsExtSpamInfo;
@property (retain, nonatomic) NSString *shareFromInfo;

+ (void)initialize;

@end
