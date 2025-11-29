@class APCDTOBindAweme, APCDTOPublishSettings, NSDictionary, APCDTOPreview, APCDTOPoiSettings, APCDTODualCamera, NSString, APCDTOPublishComposerExtension, APCDTOHotspot, APCDTOPermission, APCDTOLandingStrategy, APCDTOMission, APCDTOAnchor, APCDTOText, APCDTOCover, APCDTOAnchorSettings, APCDTOChallenge;

@interface APCDTOPublishComposer : MTLModel <AWEStudioComposerModelExtension, MTLJSONSerializing>

@property (retain, nonatomic) APCDTOPublishComposerExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) APCDTOText *text;
@property (retain, nonatomic) APCDTOAnchor *anchor;
@property (retain, nonatomic) APCDTOPermission *permission;
@property (retain, nonatomic) APCDTOLandingStrategy *landingStrategy;
@property (retain, nonatomic) APCDTOPublishSettings *settings;
@property (retain, nonatomic) APCDTOHotspot *hotspot;
@property (retain, nonatomic) APCDTODualCamera *dualCamera;
@property (retain, nonatomic) APCDTOMission *mission;
@property (copy, nonatomic) NSDictionary *customizedPublishMob;
@property (retain, nonatomic) APCDTOChallenge *challenge;
@property (retain, nonatomic) APCDTOBindAweme *bindAweme;
@property (retain, nonatomic) APCDTOCover *publishCover;
@property (retain, nonatomic) APCDTOPreview *publishPreview;
@property (retain, nonatomic) APCDTOAnchorSettings *anchorSettings;
@property (retain, nonatomic) APCDTOPoiSettings *poiSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchorJSONTransformer;
+ (id)missionJSONTransformer;
+ (id)anchorSettingsJSONTransformer;
+ (id)poiSettingsJSONTransformer;
+ (id)permissionJSONTransformer;
+ (id)challengeJSONTransformer;
+ (id)landingStrategyJSONTransformer;
+ (id)settingsJSONTransformer;
+ (id)hotspotJSONTransformer;
+ (id)dualCameraJSONTransformer;
+ (id)customizedPublishMobJSONTransformer;
+ (id)bindAwemeJSONTransformer;
+ (id)publishCoverJSONTransformer;
+ (id)publishPreviewJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)textJSONTransformer;

- (id)setupText:(id /* block */)a0;
- (id)setupHotspot:(id /* block */)a0;
- (id)setupSettings:(id /* block */)a0;
- (id)setupAnchor:(id /* block */)a0;
- (id)setupPermission:(id /* block */)a0;
- (id)setupLandingStrategy:(id /* block */)a0;
- (id)setupMission:(id /* block */)a0;
- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
