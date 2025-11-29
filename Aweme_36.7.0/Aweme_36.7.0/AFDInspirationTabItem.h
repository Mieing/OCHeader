@class NSArray, NSString, AWEVideoModel;

@interface AFDInspirationTabItem : NSObject <AFDInspirationTabItemProtocol>

@property (readonly, copy, nonatomic) NSArray *coverURLList;
@property (readonly, copy, nonatomic) NSArray *staticCoverURLList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEVideoModel *videoModel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *materialId;
@property (nonatomic) long long materialCount;
@property (nonatomic) long long usageCount;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSArray *authorAvatarURLList;
@property (readonly, copy, nonatomic) NSArray *coverURLList;
@property (readonly, copy, nonatomic) NSArray *staticCoverURLList;
@property (readonly, copy, nonatomic) NSString *additionalInfo;
@property (readonly, copy, nonatomic) NSString *authorText;
@property (nonatomic) BOOL isSearchResult;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL isCollected;
@property (copy, nonatomic) NSString *playingTemplateTips;
@property (nonatomic) long long freePlayingTemplate;
@property (nonatomic) BOOL hasShown;
@property (copy, nonatomic) NSString *referString;
@property (readonly, copy, nonatomic) NSString *itemSenceTag;
@property (readonly, copy, nonatomic) NSString *itemJianYingEnterFrom;

+ (BOOL)isVideocutInstalled;
+ (double)coverImageRatioWithItem:(id)a0;
+ (double)cellHeightForItem:(id)a0 withWidth:(double)a1;

- (id)initWithProfileTemplateModel:(id)a0;
- (void).cxx_destruct;

@end
