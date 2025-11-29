@class NSString, MMFinderLiveTask, FinderLiveContact;

@interface FinderLiveFollowContact : NSObject

@property (retain, nonatomic) NSString *uniqueKey;
@property (nonatomic) unsigned long long priority;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (retain, nonatomic) FinderLiveContact *liveContact;

+ (id)createFollowContact:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)createUniqueKey;
- (unsigned long long)getPriority;
- (BOOL)isFromMyFriend;
- (BOOL)isFromMySelf;
- (void).cxx_destruct;

@end
