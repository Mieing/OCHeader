@class NSString, WAContact, GetProfileInfoResponse, NSMutableDictionary;

@interface WAProfileLogicController : MMObject <IWAProfileServiceExt, WAContactMgrExtension> {
    NSString *_userName;
    NSMutableDictionary *_sectonType2RowNum;
    id /* block */ _requestProfileDataCompleteBlock;
}

@property (retain, nonatomic) WAContact *contact;
@property BOOL bProfileResponseDataReturned;
@property (readonly, nonatomic) GetProfileInfoResponse *profileResponseData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)localCacheAverageScoreWithUserName:(id)a0;
+ (id)localCacheCommentInfoWithUserName:(id)a0;
+ (id)localCachePageInfoWithUserName:(id)a0;

- (id)initWithUsername:(id)a0;
- (void)onModifyWeAppContact:(id)a0;
- (void)requestProfileData:(id /* block */)a0 parameter:(id)a1;
- (void)onFetchProfileInfo:(id)a0 userName:(id)a1;
- (void)tryNotifyProfileDataReady;
- (id)evaluateBasicInfo;
- (id)previewMediaList;
- (id)friendLikeList;
- (id)relatedBrandList;
- (id)newRelateWeappList;
- (id)brandRegisterTitle;
- (id)officicalUrl;
- (id)guarantUrl;
- (id)profilePageInfo;
- (id)commentInfo;
- (id)activityInfo;
- (double)averageScore;
- (void).cxx_destruct;

@end
