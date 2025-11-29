@class NSString, NSDictionary;

@interface AWELunaDiversionConfig : NSObject <AWELunaDiversionProtocol>

@property (nonatomic) long long diversionScene;
@property (nonatomic) int diversionStrategy;
@property (nonatomic) long long diversionStrategyV2;
@property (retain, nonatomic) NSString *zlinkId;
@property (retain, nonatomic) NSString *gd_label;
@property (retain, nonatomic) NSString *lunaSongID;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL isFromSKOverlay;
@property (nonatomic) BOOL isFromMusicianHompageButton;
@property (retain, nonatomic) NSString *artistID;
@property (nonatomic) long long diversionMediaType;
@property (copy, nonatomic) NSString *ugFlowAuthID;
@property (copy, nonatomic) NSString *ugFlowAuthPositionID;
@property (nonatomic) unsigned long long ugFlowAuthType;
@property (copy, nonatomic) NSString *sceneType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSceneType:(long long)a0 lunaSongID:(id)a1 groupID:(id)a2;
- (void).cxx_destruct;

@end
