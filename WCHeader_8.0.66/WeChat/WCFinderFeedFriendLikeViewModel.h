@class NSString, NSArray;

@interface WCFinderFeedFriendLikeViewModel : NSObject

@property (nonatomic) unsigned long long maxAvatorCount;
@property (nonatomic) unsigned long long friendLikeCount;
@property (copy, nonatomic) NSString *appendTips;
@property (copy, nonatomic) NSString *nicknameTips;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *suffixTips;
@property (copy, nonatomic) NSString *iconSVGName;
@property (copy, nonatomic) NSString *dynamicIconName;
@property (nonatomic) unsigned long long style;
@property (readonly, nonatomic) BOOL showAvatorContainerView;
@property (copy, nonatomic) NSArray *headerArray;
@property (nonatomic) BOOL isComboLike;
@property (nonatomic) BOOL startComboLike;
@property (nonatomic) unsigned long long comboLikeCount;
@property (copy, nonatomic) NSString *viewAccessibilityLabel;
@property (copy, nonatomic) NSString *tid;
@property (nonatomic) BOOL showThankButton;
@property (nonatomic) BOOL createdByLikeAnimation;
@property (nonatomic) BOOL shouldReadyForCarousel;

- (id)normalIconImage;
- (void).cxx_destruct;

@end
