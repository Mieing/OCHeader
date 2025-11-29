@class NSNumber, NSString;

@interface AWEModelLayerNoticeNetworkProvider.CodeGenV1NoticeActionDispatchNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ requestTag;
    void /* function */ requestExtra;
    void /* function */ requestButton;
    void /* function */ itemDisable;
    void /* function */ noticeDisable;
    void /* function */ disableSelectInfo;
}

@property (nonatomic, retain) NSNumber *noticeId;
@property (nonatomic, copy) NSString *requestTag;
@property (nonatomic, copy) NSString *requestExtra;
@property (nonatomic, copy) NSString *requestButton;
@property (nonatomic, retain) NSNumber *actionType;
@property (nonatomic, copy) NSString *itemDisable;
@property (nonatomic, copy) NSString *noticeDisable;
@property (nonatomic, retain) NSNumber *interactiveBizId;
@property (nonatomic, copy) NSString *disableSelectInfo;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
