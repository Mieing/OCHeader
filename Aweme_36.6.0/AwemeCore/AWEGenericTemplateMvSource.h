@class NSString, AWEMusicModel;

@interface AWEGenericTemplateMvSource : NSObject

@property (copy, nonatomic) NSString *mvSource;
@property (retain, nonatomic) AWEMusicModel *templateShootSelectMusic;
@property (nonatomic) BOOL isShootSame;

+ (id)publishCard;
+ (id)pageAnchor;
+ (id)shareChannel;
+ (id)fastCrossTrigger;
+ (BOOL)checkMvSourceIsShootSame:(id)a0;
+ (id)mvReuseIcon;
+ (id)musicDetail;
+ (id)innerFeedVideo;
+ (id)albumAiUpload;
+ (id)mvTabBanner;
+ (id)testDetailPage;
+ (id)mvList;
+ (id)inspirationTab;
+ (id)collectionMV;
+ (id)allMvSource;
+ (id)bringInMvSource:(id)a0 isShootSame:(BOOL)a1;
+ (id)composer;
+ (id)debug;

- (void).cxx_destruct;

@end
