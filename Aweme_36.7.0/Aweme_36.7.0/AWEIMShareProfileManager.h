@interface AWEIMShareProfileManager : NSObject

+ (void)sendRecommendUsers:(id)a0 profileCover:(id)a1 profileIDArray:(id)a2 toFriend:(id)a3 completion:(id /* block */)a4;
+ (void)transferToMessageVCWithUid:(id)a0;
+ (id)contextWithUser:(id)a0;
+ (id)shareModelWithUser:(id)a0;

@end
