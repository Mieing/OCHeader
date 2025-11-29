@class ACCAIGCTaskRetryDetailModel, NSString, ACCAIGCTaskCodeInfoModel, ACCAIGCTaskRetryExtraInfoModel;

@interface ACCAIGCTaskRetryInfoModel : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL isOutdated;
@property (nonatomic) BOOL useDowngradePath;
@property (nonatomic) unsigned long long downgradeType;
@property (copy, nonatomic) NSString *aigcType;
@property (copy, nonatomic) NSString *stickerID;
@property (retain, nonatomic) ACCAIGCTaskRetryExtraInfoModel *extraRetryInfo;
@property (copy, nonatomic) ACCAIGCTaskCodeInfoModel *serverCodeInfo;
@property (retain, nonatomic) ACCAIGCTaskRetryDetailModel *detail;
@property (copy, nonatomic) NSString *originalTaskID;
@property (copy, nonatomic) NSString *originalModelID;
@property (copy, nonatomic) NSString *fromTaskID;

- (void).cxx_destruct;

@end
