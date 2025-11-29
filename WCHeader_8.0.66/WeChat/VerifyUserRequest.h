@class BaseRequest, NSString, NSMutableArray, SKBuiltinBuffer_t;

@interface VerifyUserRequest : WXPBGeneratedMessage {
    int sceneListMemoizedSerializedSize;
}

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opcode;
@property (nonatomic) unsigned int verifyUserListSize;
@property (retain, nonatomic) NSMutableArray *verifyUserList;
@property (retain, nonatomic) NSString *verifyContent;
@property (nonatomic) unsigned int sceneListCount;
@property (retain, nonatomic) NSMutableArray *sceneList;
@property (nonatomic) unsigned int verifyInfoListCount;
@property (retain, nonatomic) NSMutableArray *verifyInfoList;
@property (retain, nonatomic) SKBuiltinBuffer_t *clientCheckData;
@property (retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo;
@property (nonatomic) unsigned int needConfirm;
@property (retain, nonatomic) NSString *ctx;

+ (void)initialize;

@end
