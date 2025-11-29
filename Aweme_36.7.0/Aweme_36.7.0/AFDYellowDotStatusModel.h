@class NSString, NSArray;
@protocol AWEFriendsYellowDotManagerProtocol;

@interface AFDYellowDotStatusModel : NSObject

@property (weak, nonatomic) id<AWEFriendsYellowDotManagerProtocol> yellowDotManager;
@property (nonatomic) long long changeReason;
@property (copy, nonatomic) NSString *dotType;
@property (copy, nonatomic) NSString *contentSource;
@property (readonly, copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSArray *contentTypesThatShowing;
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) long long tabShowNumberCount;
@property (nonatomic) long long previousTabShowNumberCount;
@property (nonatomic) long long originVideoCount;
@property (nonatomic) long long actualVideoCount;
@property (nonatomic) long long isFriendRecommend;
@property (nonatomic) long long recommendVideoCount;
@property (nonatomic) long long ignoreCount;
@property (copy, nonatomic) NSString *itemIdList;
@property (copy, nonatomic) NSString *logID;

- (void)markComponentID:(id)a0;
- (id)getChangeReasonString;
- (void)markChangeReason:(unsigned long long)a0 orChangeReasonType:(long long)a1;
- (void)resetStatus;
- (void).cxx_destruct;

@end
