@class NSString, NSDictionary, NSArray, NSNumber;
@protocol BDSimURLModel;

@interface BSSimDefaultVideoBSModel : NSObject <BDSimVideoBSModel>

@property (copy, nonatomic) NSString *gearName;
@property (retain, nonatomic) NSNumber *qualityType;
@property (retain, nonatomic) NSNumber *bitrate;
@property (retain, nonatomic) NSNumber *isH265;
@property (retain, nonatomic) NSNumber *preloadedUrlIndex;
@property (copy, nonatomic) NSString *preloadedUrl;
@property (nonatomic) long long selectedSpeed;
@property (nonatomic) BOOL isEnableSR;
@property (retain, nonatomic) id<BDSimURLModel> playAddr;
@property (copy, nonatomic) NSString *vGearId;
@property (copy, nonatomic) NSString *vGearTag;
@property (retain, nonatomic) NSNumber *uVmaf;
@property (copy, nonatomic) NSString *hdrType;
@property (copy, nonatomic) NSString *hdrBit;
@property (nonatomic) long long videoFPS;
@property (readonly, nonatomic) NSString *prefetchURL;
@property (copy, nonatomic) NSString *videoExtra;
@property (retain, nonatomic) NSDictionary *videoExtraDic;
@property (retain, nonatomic) NSDictionary *mvmafScoreDic;
@property (retain, nonatomic) NSNumber *videoBitrate;
@property (copy, nonatomic) NSString *audioFileId;
@property (readonly, nonatomic) NSArray *playURLList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
