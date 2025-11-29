@class AWEURLModel, NSString, AWEMatchingColorInfoModel, AWEMVChannelCardConfig, AWEMVChannelRecallReason;

@interface AWEMVChannelResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *videoSource;
@property (copy, nonatomic) NSString *boostId;
@property (copy, nonatomic) NSString *descSource;
@property (retain, nonatomic) AWEMVChannelRecallReason *recallReason;
@property (retain, nonatomic) AWEURLModel *bigCardUrl;
@property (retain, nonatomic) AWEURLModel *smallCardUrl;
@property (retain, nonatomic) AWEMatchingColorInfoModel *coverBaseColorInfo;
@property (retain, nonatomic) AWEMVChannelCardConfig *cardConfig;
@property (nonatomic) BOOL isWindowPlaying;
@property (nonatomic) unsigned long long cardType;
@property (nonatomic) BOOL guideForbidden;
@property (copy, nonatomic) NSString *coverInfo;
@property (copy, nonatomic) NSString *traceInfo;
@property (nonatomic) BOOL isExpandedContentAnchorDiversion;
@property (nonatomic) BOOL isTidy;
@property (copy, nonatomic) NSString *trackingRecRecallInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recallReasonJSONTransformer;
+ (id)bigCardUrlJSONTransformer;
+ (id)smallCardUrlJSONTransformer;
+ (id)coverBaseColorInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
