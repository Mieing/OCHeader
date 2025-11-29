@interface AWETeenUserProfileTracker : NSObject

+ (void)trackFavouriteDetailShowWithEnterFrom:(id)a0 tokenType:(id)a1;
+ (void)trackPersonalHomepageFavouriteShowIsVideoShow:(BOOL)a0 isAlbumShow:(BOOL)a1;
+ (void)trackPersonalHomepageLikeShow;
+ (void)trackPersonalWorkDetailAction:(id)a0 action:(id)a1;
+ (void)trackPersonalWorkDetailActionResult:(id)a0 action:(id)a1 isSuccess:(BOOL)a2;
+ (void)trackPersonalWorkCardClick:(id)a0 rank:(long long)a1;
+ (void)trackPersonalWorkCardShow:(id)a0 rank:(long long)a1;
+ (void)trackPersonalWorkTabShow;

@end
