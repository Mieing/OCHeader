@class AWEInteractionStickerOpenPlatformModel, NSString, AWEInteractionVoteStickerInfoModel;

@interface AWEInteractionStickerModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEInteractionStickerOpenPlatformModel *openPlatformModel;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *stickerID;
@property (nonatomic) long long infoStickerID;
@property (nonatomic) long long index;
@property (nonatomic) long long imageIndex;
@property (copy, nonatomic) NSString *clipID;
@property (nonatomic) BOOL adaptorPlayer;
@property (copy, nonatomic) NSString *trackInfo;
@property (copy, nonatomic) NSString *attr;
@property (nonatomic) BOOL isAutoAdded;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *extraJsonInfo;
@property (copy, nonatomic) NSString *voteID;
@property (retain, nonatomic) AWEInteractionVoteStickerInfoModel *voteInfo;
@property (copy, nonatomic) NSString *textInfo;
@property (nonatomic) long long globalSticker;
@property (copy, nonatomic) NSString *localStickerUniqueId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)compareIndexOfSticker1:(id)a0 sticker2:(id)a1;
+ (id)voteInfoJSONTransformer;
+ (id)stickerModelWithDTOStickerInfo:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;
+ (Class)classForParsingJSONDictionary:(id)a0;

- (id)stickerInfo;
- (id)generateLocationModel;
- (void)updateLocationInfo:(id)a0;
- (BOOL)storeLocationModelToTrackInfo:(id)a0;
- (BOOL)nativeSticker;
- (id)fetchLocationModelFromTrackInfo;
- (long long)indexFromType;
- (id)validTextSocialInfos;
- (id)convertMentionStickerMentionModel;
- (long long)validMentionCount;
- (long long)validHashtagCount;
- (long long)p_validSocialCountForType:(unsigned long long)a0;
- (id)convertHashtagStickerHashtagModel;
- (BOOL)markBlackMarketWithLocationModel:(id)a0 contentText:(id)a1 minWidth:(double)a2 minHeight:(double)a3 minBlankLines:(double)a4;
- (void).cxx_destruct;

@end
