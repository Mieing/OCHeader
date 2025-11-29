@class AWETemplateTagsModel, NSString, AWEAwemeModel;

@interface AWEMVUGDiversionManager : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWETemplateTagsModel *labelModel;
@property (copy, nonatomic) NSString *referString;

+ (BOOL)isInstalledJXApp;
+ (void)launchJXAppWithSourceGID:(id)a0 sourceType:(id)a1 zlink:(id)a2 channelID:(id)a3 basicSchema:(id)a4;
+ (void)openJXAppStoreWithSourceGID:(id)a0 sourceType:(id)a1 zlink:(id)a2 channelID:(id)a3 basicSchema:(id)a4;
+ (BOOL)isInstalledAppSchema:(id)a0;
+ (id)awe_DouYinSelectedUGImageNamed:(id)a0;
+ (id)buildJXDiversionSchema:(BOOL)a0 sourceGID:(id)a1 sourceType:(id)a2 zlink:(id)a3 channelID:(id)a4 basicSchema:(id)a5;
+ (id)sharedInstance;

- (BOOL)canShowRelatedVideoJXDiversionView:(id)a0 withAwemeModel:(id)a1 withPageContext:(id)a2;
- (void)saveJingxuanWeeklyLabelInfo:(id)a0 withLabelModel:(id)a1 withReferString:(id)a2;
- (id)qingTaoITuneId;
- (BOOL)canShowRelatedVideoJingXuanAnchor:(id)a0 withPageContext:(id)a1;
- (BOOL)canShowRelatedVideoJingXuanTag:(id)a0;
- (int)getRelatedVideoJingXuanTagStyle;
- (int)getRelatedVideoJingXuanAnchorStyle;
- (void)openAppStoreForJingXuan:(id)a0 delegate:(id)a1;
- (void)uploadZlinkClickEvent:(id)a0 withSchema:(id)a1;
- (void)writeDiversionInfo2Pasteboard:(id)a0 zlink:(id)a1 cert:(id)a2;
- (id)getJingXuanWeeklyLabelModel;
- (void).cxx_destruct;

@end
