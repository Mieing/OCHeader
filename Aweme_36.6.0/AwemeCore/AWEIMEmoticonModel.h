@class NSString, AWEIMEmoticonModelAudioEmojiContext, NSArray, NSURL, NSMutableDictionary, NSDictionary, AWEURLModel, AWEIMEmojiAuthor, AWEIMDisplayNameModel, NSNumber;

@interface AWEIMEmoticonModel : IESIMEmoticonModel <AWEIMEmoticonModelProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) AWEIMEmoticonModelAudioEmojiContext *ae_context;
@property (copy, nonatomic) NSArray *randomInteractiveEmojiResultResponses;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *display_name;
@property (copy, nonatomic) NSString *animate_url;
@property (copy, nonatomic) NSString *static_url;
@property (copy, nonatomic) NSString *animate_uri;
@property (copy, nonatomic) NSString *static_uri;
@property (retain, nonatomic) NSString *static_type;
@property (retain, nonatomic) NSString *animate_type;
@property (copy, nonatomic) NSDictionary *display_name_lang;
@property (retain, nonatomic) AWEIMDisplayNameModel *displayNameModel;
@property (copy, nonatomic) NSString *localPath;
@property (nonatomic) unsigned long long stickerType;
@property (nonatomic) BOOL isPlaceHolderXmoji;
@property (retain, nonatomic) NSNumber *packedSpecialID;
@property (nonatomic) BOOL canShowInActionBar;
@property (retain, nonatomic) NSNumber *version;
@property (nonatomic) long long resourceType;
@property (nonatomic) long long originThemeStyle;
@property (copy, nonatomic) NSString *originUniqueId;
@property (retain, nonatomic) NSString *imageType;
@property (nonatomic) BOOL showNotice;
@property (retain, nonatomic) NSNumber *originPackageID;
@property (retain, nonatomic) AWEURLModel *animateURLModel;
@property (copy, nonatomic) NSString *searchLogID;
@property (nonatomic) BOOL isFromSearching;
@property (nonatomic) long long emojiFromType;
@property (retain, nonatomic) NSString *hashString;
@property (retain, nonatomic) NSMutableDictionary *context;
@property (copy, nonatomic) NSArray *randomInteractiveEmojiResultInfos;
@property (retain, nonatomic) NSNumber *searchPackageID;
@property (copy, nonatomic) NSString *searchKeyword;
@property (retain, nonatomic) AWEIMEmojiAuthor *author;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) NSNumber *heycanIdentifier;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *lightInteractionName;
@property (copy, nonatomic) NSArray *stickerQuickReplyList;
@property (copy, nonatomic) NSArray *resourceVariantList;
@property (copy, nonatomic) NSString *sourceDescription;
@property (copy, nonatomic) NSString *sourceSchema;
@property (copy, nonatomic) NSString *activityDescription;
@property (copy, nonatomic) NSString *activitySchema;
@property (copy, nonatomic) NSString *stickerID;
@property (nonatomic) long long petELFStatus;
@property (retain, nonatomic) AWEURLModel *thumbnailURLModel;
@property (retain, nonatomic) NSURL *requestedURL;
@property (copy, nonatomic) NSString *emoticonIcon;
@property (copy, nonatomic) NSString *emoticonTitle;
@property (nonatomic) BOOL hide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)displayNameLangJSONTransformer;
+ (id)emoticonModelWithSearchResultObject:(id)a0;
+ (id)randomInteractiveEmojiResultResponsesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getCurrentDisplayName;
- (id)searchResultObject;
- (id)getExtraHintContent;
- (id)getExtraActivityScene;
- (BOOL)isSpecialEffectEmoji;
- (void)syncPropertiesToModel:(id)a0;
- (id)convertToIESIMEmoticonModel;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
