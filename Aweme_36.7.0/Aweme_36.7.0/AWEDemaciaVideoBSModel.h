@class NSString, NSArray, NSNumber, AWEURLModel;

@interface AWEDemaciaVideoBSModel : MTLModel <MTLJSONSerializing, IESVideoBSModelProtocol>

@property (copy, nonatomic) NSString *gearName;
@property (retain, nonatomic) NSNumber *qualityType;
@property (retain, nonatomic) NSNumber *bitrate;
@property (retain, nonatomic) NSNumber *videoBitrate;
@property (retain, nonatomic) AWEURLModel *playAddr;
@property (retain, nonatomic) NSNumber *isH265;
@property (copy, nonatomic) NSString *hdrType;
@property (copy, nonatomic) NSString *hdrBit;
@property (nonatomic) long long videoFPS;
@property (readonly, copy, nonatomic) NSArray *playURLList;
@property (readonly, copy, nonatomic) NSString *prefetchURL;
@property (retain, nonatomic) NSNumber *preloadedUrlIndex;
@property (copy, nonatomic) NSString *preloadedUrl;
@property (nonatomic) long long selectedSpeed;
@property (copy, nonatomic) NSString *videoExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isEnableSR;

+ (id)playAddrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
