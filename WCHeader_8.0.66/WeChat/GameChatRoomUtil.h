@interface GameChatRoomUtil : NSObject

+ (id)fiveDarkColor;
+ (id)uiColorFromBackEndColor:(id)a0;
+ (id)uiColorFromBackEndColor:(id)a0 defaultColor:(id)a1;
+ (void)didJoinNewRoom:(id)a0;
+ (void)didExitChatRoom:(id)a0;
+ (id)getRecentlyTickleKeyWithChatRoomName:(id)a0 andUserName:(id)a1;
+ (id)lbsInfoFromCLLocation:(id)a0;
+ (id)getLbsInfo;
+ (BOOL)isFirstTimeAccessForKey:(id)a0 autoSetIfNotFirst:(BOOL)a1;
+ (void)setFirstTimeAccessForKey:(id)a0;
+ (BOOL)isFirstTimeAccessForKeyLifeCycel:(id)a0;
+ (id)longestIncreasingSequence:(id)a0;
+ (id)topMostViewControllerConsiderGameTabVc;
+ (id)descAttributeFromContentList:(id)a0 defaultColor:(id)a1;
+ (id)currentDateTimeStr;
+ (BOOL)isExpired:(double)a0 expireDuration:(double)a1;

@end
