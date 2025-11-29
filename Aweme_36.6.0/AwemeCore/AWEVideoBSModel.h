@class NSString, NSArray, NSDictionary, NSNumber, AWEURLModel;

@interface AWEVideoBSModel : MTLModel <MTLJSONSerializing, IESVideoBSModelProtocol>

@property (copy, nonatomic) NSString *gearName;
@property (retain, nonatomic) NSNumber *qualityType;
@property (retain, nonatomic) NSNumber *bitrate;
@property (retain, nonatomic) AWEURLModel *playAddr;
@property (retain, nonatomic) NSNumber *isH265;
@property (copy, nonatomic) NSString *hdrType;
@property (copy, nonatomic) NSString *hdrBit;
@property (nonatomic) long long videoFPS;
@property (readonly, nonatomic) NSArray *playURLList;
@property (readonly, nonatomic) NSString *prefetchURL;
@property (retain, nonatomic) NSNumber *preloadedUrlIndex;
@property (copy, nonatomic) NSString *preloadedUrl;
@property (nonatomic) long long selectedSpeed;
@property (copy, nonatomic) NSString *videoExtra;
@property (retain, nonatomic) NSDictionary *videoExtraDic;
@property (retain, nonatomic) NSDictionary *mvmafScoreDic;
@property (copy, nonatomic) NSString *audioFileId;
@property (retain, nonatomic) NSNumber *realBitrate;
@property (retain, nonatomic) NSNumber *videoBitrate;
@property (copy, nonatomic) NSString *vGearId;
@property (copy, nonatomic) NSString *vGearTag;
@property (retain, nonatomic) NSNumber *uVmaf;
@property (nonatomic) BOOL isEnableSR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playAddrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)get_BSurl;
- (id)videoExtraDicInfo;
- (void).cxx_destruct;

@end
