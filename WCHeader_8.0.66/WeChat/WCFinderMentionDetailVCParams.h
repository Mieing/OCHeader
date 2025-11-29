@class WCFinderJumpInfo, NSArray, WCFinderFeedContentVM, WCFinderContact;

@interface WCFinderMentionDetailVCParams : NSObject

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) unsigned long long autoShowListType;
@property (nonatomic) BOOL fromFirstLike;
@property (nonatomic) BOOL showMoreAction;
@property (copy, nonatomic) NSArray *refFriendUsernames;
@property (retain, nonatomic) WCFinderContact *currentAuthorContact;
@property (nonatomic) BOOL forbiddenMinimize;
@property (nonatomic) BOOL fromThankMention;
@property (nonatomic) int customTLFollowEnterType;
@property (retain, nonatomic) WCFinderJumpInfo *enterShowJumpInfo;

+ (id)paramsWithContentVM:(id)a0;

- (void).cxx_destruct;

@end
