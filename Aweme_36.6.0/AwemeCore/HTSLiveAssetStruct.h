@class HTSLiveCleanStrategy, NSString, HTSLiveFormat265Resource, HTSLiveImage, HTSLiveFormat265SuperResource, NSMutableArray, HTSLiveAnchorGuide;

@interface HTSLiveAssetStruct : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *localPath;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *resourceUri;
@property (nonatomic) long long legacyEffectId;
@property (retain, nonatomic) HTSLiveImage *resourceURL;
@property (nonatomic) BOOL hasResourceURL;
@property (copy, nonatomic) NSString *describe;
@property (nonatomic) long long id_p;
@property (nonatomic) int resourceType;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) long long size;
@property (copy, nonatomic) NSString *lokiExtra;
@property (nonatomic) int downloadType;
@property (retain, nonatomic) NSMutableArray *modelRequirementsArray;
@property (readonly, nonatomic) unsigned long long modelRequirementsArray_Count;
@property (retain, nonatomic) HTSLiveFormat265Resource *format265Resource;
@property (nonatomic) BOOL hasFormat265Resource;
@property (copy, nonatomic) NSString *lynxSchema;
@property (retain, nonatomic) HTSLiveFormat265SuperResource *format265SuperResource;
@property (nonatomic) BOOL hasFormat265SuperResource;
@property (retain, nonatomic) HTSLiveAnchorGuide *anchorGuide;
@property (nonatomic) BOOL hasAnchorGuide;
@property (nonatomic) BOOL isTest;
@property (nonatomic) long long modifyVersion;
@property (nonatomic) BOOL faceResourceRepelHighSticker;
@property (nonatomic) long long bizType;
@property (nonatomic) int assetSource;
@property (nonatomic) long long expireTime;
@property (retain, nonatomic) HTSLiveCleanStrategy *cleanStrategy;
@property (nonatomic) BOOL hasCleanStrategy;
@property (nonatomic) long long minPlayDuration;
@property (nonatomic) long long playChannel;

+ (id)descriptor;

- (id)cleanStrategy;
- (long long)id_p;
- (id)realLynxSchema;
- (id)lokiExtraDict;
- (BOOL)isLynxAsset;
- (BOOL)available;
- (BOOL)hasModel;
- (id)resourceURLs;
- (void)setHasModel:(BOOL)a0;

@end
