@class NSString, FinderMention_FinderMentionThankInfo_RedPackageInfo;

@interface FinderMention_FinderMentionThankInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int interactionType;
@property (nonatomic) unsigned int isHotLikeIcon;
@property (nonatomic) unsigned int isFlowerLikeIcon;
@property (nonatomic) unsigned int thankIconType;
@property (nonatomic) unsigned int hasRedpackage;
@property (retain, nonatomic) FinderMention_FinderMentionThankInfo_RedPackageInfo *redpackageInfo;
@property (retain, nonatomic) NSString *thankForwardWording;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setThankForwardWording:(id)a0;
- (id)thankForwardWording;
- (void)setRedpackageInfo:(id)a0;
- (id)redpackageInfo;
- (void)setHasRedpackage:(unsigned int)a0;
- (unsigned int)hasRedpackage;
- (void)setThankIconType:(unsigned int)a0;
- (unsigned int)thankIconType;
- (void)setIsFlowerLikeIcon:(unsigned int)a0;
- (unsigned int)isFlowerLikeIcon;
- (void)setIsHotLikeIcon:(unsigned int)a0;
- (unsigned int)isHotLikeIcon;
- (void)setInteractionType:(unsigned int)a0;
- (unsigned int)interactionType;
- (id)archivedWCTValue;

@end
