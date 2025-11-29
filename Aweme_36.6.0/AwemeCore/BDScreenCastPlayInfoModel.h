@class NSString, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface BDScreenCastPlayInfoModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *urlsDict;
@property (retain, nonatomic) NSMutableArray *resolutionKeys;
@property (retain, nonatomic) NSMutableDictionary *resolutionDict;
@property (copy, nonatomic) NSString *videoID;
@property (retain, nonatomic) NSMutableDictionary *allResolutionInfos;
@property (readonly, nonatomic) long long videoSizeType;
@property (copy, nonatomic) NSDictionary *seekTsDict;
@property (readonly, nonatomic) double openingTs;
@property (readonly, nonatomic) double endingTs;
@property (copy, nonatomic) NSString *albumID;

- (id)supportedResolutionTypes;
- (id)initWithVideoID:(id)a0;
- (void)addUrlModel:(id)a0;
- (long long)sizeForResolution:(id)a0;
- (id)mainUrlForResolution:(id)a0;
- (id)showingTitleForResolution:(id)a0;
- (id)urlModelFroResolution:(id)a0;
- (BOOL)isOverStandardResolution:(id)a0;
- (BOOL)containsTopSpeedResolution;
- (BOOL)isReal4KForResolution:(id)a0;
- (id)allSupportedResolutionInfos;
- (void)removeUrlModelForResolution:(id)a0;
- (id)resolutionForShowingTitle:(id)a0;
- (void)addMainUrl:(id)a0 forResolution:(id)a1;
- (void).cxx_destruct;

@end
