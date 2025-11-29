@class NSString, NSArray;

@interface AWEDTOQuickStoryModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isStory;
@property (nonatomic) long long storyTtlMinute;
@property (nonatomic) BOOL isNeedUseStoryPermission;
@property (nonatomic) BOOL isSharePost;
@property (nonatomic) long long quickShareType;
@property (copy, nonatomic) NSString *quickShareInputContent;
@property (nonatomic) BOOL is24Story;
@property (nonatomic) long long specialEnter24StoryType;
@property (copy, nonatomic) NSArray *dontShareUidList;
@property (nonatomic) long long storyPermission;
@property (nonatomic) long long isFriendPanel;
@property (copy, nonatomic) NSString *reserved_kw_newStoryPublishFrom;
@property (copy, nonatomic) NSString *downloadType;
@property (copy, nonatomic) NSString *itemDuet;
@property (copy, nonatomic) NSString *itemShare;
@property (nonatomic) long long story24PrivacyType;
@property (nonatomic) long long isPermissionRefactor;
@property (nonatomic) long long storyAwemeType;
@property (copy, nonatomic) NSString *socialTextBg;
@property (nonatomic) long long recordModeIdentifier;
@property (nonatomic) BOOL isMomentStory;
@property (copy, nonatomic) NSArray *quickShareMentionTextExtra;
@property (nonatomic) BOOL isFromCinemaMode;
@property (nonatomic) BOOL supportPublishMention;
@property (nonatomic) long long sparkBackgroundIndex;
@property (copy, nonatomic) NSString *sparkResourceList;
@property (nonatomic) BOOL isLogColorSpace;
@property (retain, nonatomic) NSArray *hasClickFilterCancelSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)quickShareMentionTextExtraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
