@class NSString, NSNumber, NSDictionary;

@interface AFDColorRingEnterMomentFeedParameter : NSObject

@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *isSkylightUnread;
@property (retain, nonatomic) NSNumber *shouldUseSkylightCache;
@property (nonatomic) BOOL isMineDraft;
@property (retain, nonatomic) NSNumber *updateNotice;
@property (copy, nonatomic) NSString *circleSource;
@property (copy, nonatomic) NSString *circlePosition;
@property (copy, nonatomic) NSString *closeFriendsRelationTag;
@property (retain, nonatomic) NSNumber *isDraftItem;
@property (retain, nonatomic) NSNumber *requestFeedStrategy;
@property (retain, nonatomic) NSNumber *momentRingFrom;
@property (retain, nonatomic) NSNumber *enableOpenNewPage;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void)setupForNotesEnterWithItemID:(id)a0 userID:(id)a1;
- (void)setupForMyAvatarEnter;
- (void)setupForOthersAvatarEnterWithUserID:(id)a0;
- (id)generateParameters;
- (void).cxx_destruct;
- (id)initWithScene:(unsigned long long)a0;

@end
