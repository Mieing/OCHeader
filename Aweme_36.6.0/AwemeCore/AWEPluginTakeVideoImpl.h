@class NSString, NSDictionary, NSArray;

@interface AWEPluginTakeVideoImpl : NSObject <BDPTakeVideoPluginDelegate, AWEPublishTaskMessage, AWEStudioPublishPathMessage, AWEIronManShareTaskMessage>

@property (nonatomic) BOOL isWelfare;
@property (nonatomic) BOOL hasAnchorInVideo;
@property (nonatomic) BOOL videoIdWithoutAnchor;
@property (nonatomic) BOOL customStickerPathFromWeb;
@property (nonatomic) long long versionCode;
@property (nonatomic) long long videoDuration;
@property (nonatomic) long long getUserIdCounts;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *session;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *aliasId;
@property (copy, nonatomic) NSDictionary *welfareDict;
@property (copy, nonatomic) NSDictionary *headerFieldDict;
@property (copy, nonatomic) NSDictionary *anchorRequestInfoExtra;
@property (copy, nonatomic) NSDictionary *mentionInfo;
@property (copy, nonatomic) NSDictionary *mentionMarkersResult;
@property (copy, nonatomic) NSDictionary *mentionStickersResult;
@property (copy, nonatomic) NSDictionary *stickersSettings;
@property (copy, nonatomic) NSDictionary *titleSettings;
@property (copy, nonatomic) NSDictionary *anchorsSettings;
@property (copy, nonatomic) NSArray *blockList;
@property (copy, nonatomic) NSArray *allMentionMarkerInfo;
@property (copy, nonatomic) NSArray *allHashtagMarkerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)ironManVideoPublishResult:(BOOL)a0;
- (void)addMentionsAndHashtagsWithExtras:(id)a0 body:(id)a1;
- (id)getMentionMarkerWithArray:(id)a0;
- (id)getHashtagMarkerWithArray:(id)a0;
- (id)getTextStickersListWithArray:(id)a0;
- (id)getHashtagStickersListWithArray:(id)a0;
- (id)getMentionStickersWithArray:(id)a0;
- (id)getCustomStickersListWithArray:(id)a0;
- (id)generateAnchorInfoWithParam:(id)a0 hasPermission:(BOOL)a1;
- (void)userHasAnchorPermissionWithCompletion:(id /* block */)a0;
- (void)getAllUserIdAndNickNameWithParam:(id)a0 completion:(id /* block */)a1;
- (void)getUserIdWithOpenId:(id)a0 completion:(id /* block */)a1;
- (void)getUserNickNamesWithOpenId:(id)a0 completion:(id /* block */)a1;
- (id)generateSchemaWithPath:(id)a0;
- (id)validColorHexString:(id)a0;
- (double)validFontSize:(double)a0;
- (double)validTime:(double)a0 start:(BOOL)a1;
- (double)validScale:(double)a0;
- (long long)validStartIndex:(long long)a0;
- (double)validScaleWeb:(double)a0;
- (void)bdp_uploadDouYinVideoWithParam:(id)a0 ironManParam:(id)a1 complete:(id /* block */)a2;
- (void).cxx_destruct;
- (double)validLocation:(double)a0;
- (id)init;
- (void)dealloc;
- (BOOL)isValidLocation:(double)a0;

@end
