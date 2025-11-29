@class NSString, NSNumber, NSArray;

@interface AWEModelLayerStudioNetworkProvider.CodeGenV1MusicAwemeRelatedNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ musicId;
    void /* function */ disableMusicTurntableReason;
    void /* function */ backupMusicIds;
    void /* function */ originalMaterial;
    void /* function */ effectSdkVersion;
}

@property (nonatomic, copy) NSString *musicId;
@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, copy) NSString *disableMusicTurntableReason;
@property (nonatomic, retain) NSNumber *lyricType;
@property (nonatomic, retain) NSNumber *hasOriginMusicAweme;
@property (nonatomic, copy) NSString *backupMusicIds;
@property (nonatomic, copy) NSArray *originalMaterial;
@property (nonatomic, copy) NSString *effectSdkVersion;
@property (nonatomic, retain) NSNumber *scene;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
