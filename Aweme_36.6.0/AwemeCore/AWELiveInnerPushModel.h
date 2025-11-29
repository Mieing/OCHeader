@class AWELiveFormatExtra, NSString, NSNumber, AWEURLModel;

@interface AWELiveInnerPushModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *avatar;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSNumber *anchorID;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *pushSource;
@property (retain, nonatomic) AWELiveFormatExtra *formatExtra;
@property (nonatomic) unsigned long long anchorType;
@property (nonatomic) long long pushContentType;

+ (id)avatarModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)enterFrom;
- (id)enterMethod;
- (id)extraParams;
- (id)enterFromMerge;
- (id)requestPage;
- (BOOL)isVSLiveMergePremiere;
- (BOOL)hotPush;
- (id)vsEpisodeStage;
- (BOOL)isVSNew;
- (long long)VSMode;
- (id)anchorTypeStr;
- (id)vsSeasonID;
- (void)addQueryValue:(id)a0 forKey:(id)a1;
- (id)getURLQueryValueWithURL:(id)a0 queryKey:(id)a1;
- (id)liveReason;
- (void).cxx_destruct;
- (id)pushType;
- (BOOL)mustShow;

@end
