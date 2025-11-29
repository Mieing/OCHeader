@class NSString, NSMutableDictionary;

@interface AWEFollowUserUnreadManager : NSObject <AWEFollowUserUnreadManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *mappingInsertIDDict;
@property (retain, nonatomic) NSMutableDictionary *mappingUnreadDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (long long)unreadCountWithUserID:(id)a0;
- (BOOL)hasUnreadAwemeWithUserID:(id)a0;
- (void)markHasEnterDetail:(id)a0;
- (void)clearAllUnreadData;
- (void)updateUser:(id)a0 insertID:(id)a1;
- (id)getInsertIDWithUserID:(id)a0;
- (void)clearInsertIDsForUser:(id)a0;
- (void)clearAllInsertIDs;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
