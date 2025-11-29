@class AWEOriginalLunaDiversionModel, AWEMusicianMusicCardDataModel, NSNumber, AWEURLModel;

@interface AWEOriginalMusicianModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *musicCount;
@property (retain, nonatomic) NSNumber *musicUsedCount;
@property (retain, nonatomic) AWEURLModel *musicQRCodeURL;
@property (retain, nonatomic) AWEURLModel *musicCoverURL;
@property (retain, nonatomic) NSNumber *diggCount;
@property (retain, nonatomic) NSNumber *fullMusicCount;
@property (retain, nonatomic) NSNumber *forceMusicItemCount;
@property (retain, nonatomic) AWEOriginalLunaDiversionModel *lunaDiversionInfo;
@property (retain, nonatomic) AWEMusicianMusicCardDataModel *musicCardData;

+ (id)musicCoverURLJSONTransformer;
+ (id)musicQRCodeURLJSONTransformer;
+ (id)lunaDiversionInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDict:(id)a0;

@end
