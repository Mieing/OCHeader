@class NSArray, NSString;

@interface AWEFeedShowCommentPanelParams : NSObject

@property (copy, nonatomic) NSArray *commentIDs;
@property (nonatomic) unsigned long long intentTab;
@property (copy, nonatomic) NSString *highlightID;
@property (nonatomic) BOOL needScrollToTop;
@property (nonatomic) BOOL needRefresh;
@property (nonatomic) BOOL isForcedToShowInputView;
@property (nonatomic) BOOL isForcedToShowInputViewSync;
@property (nonatomic) BOOL shouldShowDefaultText;
@property (nonatomic) BOOL shouldShowReply;
@property (nonatomic) BOOL forceOpen;
@property (nonatomic) BOOL isBullet;
@property (copy, nonatomic) NSString *commentInsertConversationID;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *accountType;
@property (nonatomic) BOOL isUnreadMentionFastReply;

- (void).cxx_destruct;

@end
