@class NSArray;

@interface AWEModelLayerNoticeNetworkProvider.CodeGenV1NoticeTraceNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ noticeTraceList;
}

@property (nonatomic, copy) NSArray *noticeTraceList;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
