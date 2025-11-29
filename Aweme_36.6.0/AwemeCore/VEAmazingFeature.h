@class NSString, IESMMKeyFrameInfo, NSMutableDictionary;

@interface VEAmazingFeature : VEFilterFeature <NSCopying, KeyFrameOperationDelegate>

@property (nonatomic) unsigned long long nle_resourceType;
@property (copy, nonatomic) NSString *nle_filterName;
@property (retain, nonatomic) IESMMKeyFrameInfo *featureKeyFrameInfo;
@property (retain, nonatomic) NSMutableDictionary *extraInfoDic;
@property (copy, nonatomic) NSString *resPath;
@property (copy, nonatomic) NSString *subStickerDir;
@property (retain, nonatomic) NSMutableDictionary *subStickers;
@property (nonatomic) int order;
@property (copy, nonatomic) NSString *params;
@property (copy, nonatomic) NSString *algoCachePath;
@property (copy, nonatomic) NSString *stopMotionPath;
@property (nonatomic) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setkeyFrameInfo:(id)a0 withPts:(unsigned long long)a1;
- (void)removekeyFrameInfo:(unsigned long long)a0;
- (void)removeallKeyFrameInfo;
- (id)getKeyFrameInfo;
- (void)completeUpdateAllkeyFrames;
- (unsigned long long)getKeyFrameNum;
- (BOOL)needRefreshKeyFrame;
- (id)initWithPath:(id)a0 identifier:(id)a1;
- (void)setExtraInfo:(id)a0 forKey:(id)a1;
- (id)extraInfoForKey:(id)a0;
- (id)getExtraInfoDict;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isContentEqual:(id)a0;

@end
