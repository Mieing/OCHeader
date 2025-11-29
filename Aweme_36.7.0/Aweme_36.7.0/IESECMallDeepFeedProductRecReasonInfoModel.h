@class NSString, IESECMallDeepFeedProductRecReasonCoverInfoModel;

@interface IESECMallDeepFeedProductRecReasonInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *contentColor;
@property (copy, nonatomic) IESECMallDeepFeedProductRecReasonCoverInfoModel *cover;
@property (copy, nonatomic) NSString *tagTrackParam;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *headerFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
