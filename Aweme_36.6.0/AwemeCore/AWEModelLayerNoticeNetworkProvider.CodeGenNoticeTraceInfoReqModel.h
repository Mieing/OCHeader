@class NSString, NSNumber;

@interface AWEModelLayerNoticeNetworkProvider.CodeGenNoticeTraceInfoReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ noticeId;
    void /* function */ noticeType;
    void /* function */ subType;
}

@property (nonatomic, copy) NSString *noticeId;
@property (nonatomic, copy) NSString *noticeType;
@property (nonatomic, copy) NSString *subType;
@property (nonatomic, retain) NSNumber *scene;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
