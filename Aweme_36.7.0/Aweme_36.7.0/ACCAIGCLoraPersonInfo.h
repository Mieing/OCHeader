@class ACCAIGCTaskRetryDetailModel, NSString, NSArray, ACCAIGCTaskCodeInfoModel, AWEURLModel;

@interface ACCAIGCLoraPersonInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *loraId;
@property (copy, nonatomic) AWEURLModel *coverImage;
@property (copy, nonatomic) AWEURLModel *downloadAddr;
@property (copy, nonatomic) NSArray *originalImages;
@property (nonatomic) long long createTime;
@property (nonatomic) long long waitingMinutes;
@property (nonatomic) long long modelUserType;
@property (nonatomic) BOOL enableDelete;
@property (nonatomic) BOOL enableReset;
@property (nonatomic) long long taskStatus;
@property (copy, nonatomic) NSString *waitTimeTip;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) BOOL isEmptyAddLora;
@property (nonatomic) BOOL enableRetry;
@property (retain, nonatomic) ACCAIGCTaskRetryDetailModel *retryDetail;
@property (retain, nonatomic) ACCAIGCTaskCodeInfoModel *codeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)retryDetailJSONTransformer;
+ (id)codeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValidLoraId;
- (BOOL)isLoraBuilding;
- (id)getLoraCoverImageDownloadPath;
- (id)getLoraCreateTime;
- (BOOL)loraCreateFinished;
- (id)loraInfoBuildRemainTimeWithPrefix:(id)a0;
- (id)loraInfoBuildRemainTime;
- (id)getOnlyLoraCreateTime;
- (id)loraInfoBuildRemainTimeShotText;
- (void).cxx_destruct;

@end
