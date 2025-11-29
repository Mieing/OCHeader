@class NSString, NSDictionary, NSURL, ACCPublishShareModel;

@interface AWERepoShareModel : NSObject <AWERepositoryDraftProtocol, ACCRepoRegister, NSCopying, ACCRepositoryRequestParamsDeprecated, ACCRepositoryTrackContextDeprecated, AWERepoShareData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSURL *shareVideoURL;
@property (copy, nonatomic) NSString *thirdAppKey;
@property (copy, nonatomic) NSString *thirdAppName;
@property (copy, nonatomic) NSString *openPlatformShareId;
@property (nonatomic) long long openPlatformShareFrom;
@property (copy, nonatomic) NSDictionary *openPlatformShareMonitor;
@property (retain, nonatomic) id commerceOpenShareHelper;
@property (retain, nonatomic) ACCPublishShareModel *shareModel;
@property (nonatomic) BOOL syncToToutiao;
@property (nonatomic) BOOL isSyncXiguaFromOpenShare;
@property (nonatomic) BOOL shouldShowDouplusOutter;
@property (nonatomic) BOOL shareToPublish;
@property (copy, nonatomic) NSString *sharePanelType;
@property (nonatomic) BOOL isSharePanelFromPublishPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (long long)isDxXiguaSyncStep2;
- (BOOL)isShareFromJianying;
- (id)acc_publishTrackEventParams:(id)a0;
- (id)shareShootWay;
- (BOOL)isShareFromXingtu;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
