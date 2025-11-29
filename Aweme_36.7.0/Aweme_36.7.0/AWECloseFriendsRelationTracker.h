@class NSString;

@interface AWECloseFriendsRelationTracker : NSObject <AWECloseFriendsRelationTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getRelationTagWithUserID:(id)a0;
+ (id)getRelationTagWithType:(long long)a0 userID:(id)a1;
+ (id)getCloseFriendsChooseActionWithType:(long long)a0;
+ (id)getCloseFriendsChooseTrackParamsWithType:(long long)a0 enterFrom:(id)a1 userID:(id)a2;


@end
