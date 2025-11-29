@class NSString, NSMutableArray;

@interface FinderObjectExtInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int objectType;
@property (retain, nonatomic) NSString *wordingSingleLike;
@property (retain, nonatomic) NSString *wordingMultiLike;
@property (retain, nonatomic) NSString *wordingLikelistTitle;
@property (retain, nonatomic) NSString *wordingMentionLike;
@property (retain, nonatomic) NSString *wordingMentionFriendsLike;
@property (retain, nonatomic) NSString *wordingMentionLikeLikes;
@property (retain, nonatomic) NSString *iconFilledDarkUrl;
@property (retain, nonatomic) NSString *iconFilledLightUrl;
@property (retain, nonatomic) NSString *iconOutlinedDarkUrl;
@property (retain, nonatomic) NSString *iconOutlinedLightUrl;
@property (retain, nonatomic) NSString *wordingIcon;
@property (retain, nonatomic) NSString *iconFilledGroupUrl;
@property (retain, nonatomic) NSString *iconFilledLightUrlFullpage;
@property (retain, nonatomic) NSString *iconFilledDarkUrlFullpage;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSString *hotLikeOffIconLightUrl;
@property (retain, nonatomic) NSString *hotLikeOffIconDarkUrl;

+ (void)initialize;

- (void)setHotLikeOffIconDarkUrl:(id)a0;
- (id)hotLikeOffIconDarkUrl;
- (void)setHotLikeOffIconLightUrl:(id)a0;
- (id)hotLikeOffIconLightUrl;
- (void)setItems:(id)a0;
- (id)items;
- (void)setIconFilledDarkUrlFullpage:(id)a0;
- (id)iconFilledDarkUrlFullpage;
- (void)setIconFilledLightUrlFullpage:(id)a0;
- (id)iconFilledLightUrlFullpage;
- (void)setIconFilledGroupUrl:(id)a0;
- (id)iconFilledGroupUrl;
- (void)setWordingIcon:(id)a0;
- (id)wordingIcon;
- (void)setIconOutlinedLightUrl:(id)a0;
- (id)iconOutlinedLightUrl;
- (void)setIconOutlinedDarkUrl:(id)a0;
- (id)iconOutlinedDarkUrl;
- (void)setIconFilledLightUrl:(id)a0;
- (id)iconFilledLightUrl;
- (void)setIconFilledDarkUrl:(id)a0;
- (id)iconFilledDarkUrl;
- (void)setWordingMentionLikeLikes:(id)a0;
- (id)wordingMentionLikeLikes;
- (void)setWordingMentionFriendsLike:(id)a0;
- (id)wordingMentionFriendsLike;
- (void)setWordingMentionLike:(id)a0;
- (id)wordingMentionLike;
- (void)setWordingLikelistTitle:(id)a0;
- (id)wordingLikelistTitle;
- (void)setWordingMultiLike:(id)a0;
- (id)wordingMultiLike;
- (void)setWordingSingleLike:(id)a0;
- (id)wordingSingleLike;
- (void)setObjectType:(unsigned int)a0;
- (unsigned int)objectType;

@end
