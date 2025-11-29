@class NSMutableArray, NSData, RoamVersion, BaseResponse;

@interface RoamSyncResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseresponse;
@property (retain, nonatomic) RoamVersion *roamVersion;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL needAddNewKey;
@property (retain, nonatomic) NSData *roamSetting;
@property (retain, nonatomic) NSData *roamEncryptKey;
@property (retain, nonatomic) NSMutableArray *delOp;
@property (retain, nonatomic) NSMutableArray *roamData;
@property (nonatomic) BOOL forceReplaceVersion;
@property (nonatomic) BOOL reinitAll;
@property (retain, nonatomic) NSData *context;

+ (void)initialize;

@end
