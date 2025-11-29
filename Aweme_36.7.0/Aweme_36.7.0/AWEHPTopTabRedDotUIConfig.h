@class NSString, AWEHPRedDotUIConfig;

@interface AWEHPTopTabRedDotUIConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double badgeSize;
@property (nonatomic) double countBadgeSize;
@property (nonatomic) double countBadgeFontSize;
@property (nonatomic) double countBadgeMargin;
@property (nonatomic) double textBadgeSize;
@property (nonatomic) double textBadgeFontSize;
@property (nonatomic) double textBadgeMargin;
@property (nonatomic) double badgeBaseline;
@property (nonatomic) double badgeOffsetY;
@property (nonatomic) double badgeOffsetX;
@property (nonatomic) double avatarBadgeOffsetY;
@property (nonatomic) double avatarBadgeOffsetX;
@property (readonly, nonatomic) BOOL avatarBadgeHollowDisplay;
@property (readonly, nonatomic) double avatarBadgeHollowSize;
@property (nonatomic) double bigBadgeOffsetY;
@property (nonatomic) double avatarBigBadgeOffsetY;
@property (retain, nonatomic) AWEHPRedDotUIConfig *firstConfig;
@property (retain, nonatomic) AWEHPRedDotUIConfig *normalConfig;
@property (retain, nonatomic) AWEHPRedDotUIConfig *firstAvatarConfig;
@property (retain, nonatomic) AWEHPRedDotUIConfig *normalAvatarConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
