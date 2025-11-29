@class NSString, NSArray, AWEQuickFlashRedEnvelopeModel, AWEURLModel;

@interface AWEQuickFlashStickerInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSString *inspirationId;
@property (copy, nonatomic) NSString *inspirationType;
@property (copy, nonatomic) NSString *inspirationChannel;
@property (nonatomic) BOOL collected;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long relatedMusicId;
@property (nonatomic) long long relatedStickerId;
@property (copy, nonatomic) NSString *followId;
@property (copy, nonatomic) NSArray *quickFlashStickerUserInfo;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *countString;
@property (copy, nonatomic) NSString *creatorNickName;
@property (nonatomic) long long creatorUId;
@property (copy, nonatomic) NSString *creatorAwemeId;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isCommerceFlashmob;
@property (copy, nonatomic) NSString *commerceHashtagId;
@property (copy, nonatomic) NSString *commerceStickerId;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (nonatomic) BOOL onlyTitle;
@property (nonatomic) BOOL bindHashTag;
@property (copy, nonatomic) NSString *typeExtra;
@property (nonatomic) BOOL userHasJoined;
@property (nonatomic) BOOL isFromFeedFollowEntry;
@property (nonatomic) BOOL isFullPage;
@property (copy, nonatomic) NSString *flashMobSpeakId;
@property (copy, nonatomic) NSString *preInsertAwemeIds;
@property (nonatomic) long long defaultInsertVideoSource;
@property (retain, nonatomic) AWEQuickFlashRedEnvelopeModel *redEnvelopeInfo;
@property (retain, nonatomic) NSString *fullPageSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)quickFlashStickerUserInfoJSONTransformer;
+ (id)redEnvelopeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
