@class NSString;

@interface AFDInviteFriendMessageContentModel : NSObject

@property (copy, nonatomic) NSString *titlePart1;
@property (copy, nonatomic) NSString *titlePart2;
@property (copy, nonatomic) NSString *subtitlePart1;
@property (copy, nonatomic) NSString *subtitlePart2;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonTextDisable;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *msgHint;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *ownerID;
@property (copy, nonatomic) NSString *ownerSecID;
@property (nonatomic) unsigned long long type;

- (id)p_getImageUrlStringFromSettings;
- (void).cxx_destruct;

@end
