@class LiveReplaySetting, NSString, MicSetting, NSMutableArray, LiveLotterySetting;

@interface FinderContactLiveInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long anchorStatusFlag;
@property (nonatomic) unsigned int switchFlag;
@property (retain, nonatomic) MicSetting *micSetting;
@property (retain, nonatomic) LiveLotterySetting *lotterySetting;
@property (nonatomic) unsigned int anchorShopTag;
@property (nonatomic) BOOL isFanClubMember;
@property (retain, nonatomic) NSMutableArray *liveCoverImgs;
@property (nonatomic) unsigned int liveCoverImgTs;
@property (retain, nonatomic) NSString *streamUrl;
@property (retain, nonatomic) NSString *recommendReason;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) LiveReplaySetting *replaySetting;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setReplaySetting:(id)a0;
- (id)replaySetting;
- (void)setObjectId:(unsigned long long)a0;
- (unsigned long long)objectId;
- (void)setRecommendReason:(id)a0;
- (id)recommendReason;
- (void)setStreamUrl:(id)a0;
- (id)streamUrl;
- (void)setLiveCoverImgTs:(unsigned int)a0;
- (unsigned int)liveCoverImgTs;
- (void)setLiveCoverImgs:(id)a0;
- (id)liveCoverImgs;
- (void)setIsFanClubMember:(BOOL)a0;
- (BOOL)isFanClubMember;
- (void)setAnchorShopTag:(unsigned int)a0;
- (unsigned int)anchorShopTag;
- (void)setLotterySetting:(id)a0;
- (id)lotterySetting;
- (void)setMicSetting:(id)a0;
- (id)micSetting;
- (void)setSwitchFlag:(unsigned int)a0;
- (unsigned int)switchFlag;
- (void)setAnchorStatusFlag:(unsigned long long)a0;
- (unsigned long long)anchorStatusFlag;
- (id)archivedWCTValue;

@end
