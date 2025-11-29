@class NSNumber, NSString;

@interface AWEModelLayerNoticeNetworkProvider.CodeGenV1NoticeDelNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ noticeIds;
    void /* function */ noticeIdStr;
}

@property (nonatomic, retain) NSNumber *noticeId;
@property (nonatomic, retain) NSNumber *group;
@property (nonatomic, retain) NSNumber *actionType;
@property (nonatomic, copy) NSString *noticeIds;
@property (nonatomic, copy) NSString *noticeIdStr;
@property (nonatomic, retain) NSNumber *noticeType;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
