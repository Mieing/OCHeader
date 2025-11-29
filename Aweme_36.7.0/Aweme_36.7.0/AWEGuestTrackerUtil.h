@interface AWEGuestTrackerUtil : NSObject

+ (void)trackFollowWithUser:(id)a0 enterFrom:(id)a1 isUnfollow:(BOOL)a2;
+ (void)trackClickFollowCountWithEnterFrom:(id)a0 extraParams:(id)a1;
+ (void)trackLikeSnackbarClickWithEnterFrom:(id)a0 groupID:(id)a1 authorID:(id)a2;
+ (void)trackLikeSnackbarShowWithEnterFrom:(id)a0 groupID:(id)a1 authorID:(id)a2;
+ (void)trackVisitorLikeWithEnterFrom:(id)a0 isUndigg:(BOOL)a1 response:(id)a2 error:(id)a3;
+ (void)trackVisitorFollowWithEnterFrom:(id)a0 isUnfollow:(BOOL)a1 response:(id)a2 error:(id)a3;

@end
