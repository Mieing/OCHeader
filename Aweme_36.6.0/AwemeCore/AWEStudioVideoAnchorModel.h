@class NSString, NSArray, NSDictionary;

@interface AWEStudioVideoAnchorModel : AWEBaseApiModel <NSCopying>

@property (nonatomic) long long anchorBusinessType;
@property (nonatomic) long long subType;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSString *anchorTag;
@property (copy, nonatomic) NSString *anchorContent;
@property (nonatomic) BOOL passiveAnchor;
@property (nonatomic) long long passiveOptions;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL forbidCheck;
@property (nonatomic) BOOL isSilentAdd;
@property (copy, nonatomic) NSArray *anchorIconList;
@property (copy, nonatomic) NSString *anchorTitle;
@property (nonatomic) BOOL disableDraft;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSDictionary *anchorPublishParam;
@property (copy, nonatomic) NSDictionary *lifePublishFinishParams;
@property (copy, nonatomic) NSDictionary *anchorTrackParams;
@property (retain, nonatomic) NSString *undeletableToast;
@property (retain, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *graphicsAnchorType;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasAnchorInfo;
- (BOOL)addTextAnchor;
- (id)numberOfAnchorBusinessType;
- (void)updatePassiveAnchor:(BOOL)a0;
- (BOOL)addImageAnchor;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)anchor;
- (id)initWithAnchor:(id)a0;
- (void)copyFrom:(id)a0;

@end
