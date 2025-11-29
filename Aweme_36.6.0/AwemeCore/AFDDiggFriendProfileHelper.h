@class NSString;

@interface AFDDiggFriendProfileHelper : NSObject <AFDDiggFriendProfileHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)diggProfileBottomBubbleType;
+ (BOOL)shouldShowDigg:(id)a0;
+ (void)diggProfile:(id)a0 actionType:(id)a1 completion:(id /* block */)a2;
+ (BOOL)expandDiggViewIfNeeded;
+ (BOOL)shouldShowBottomDiggBubble:(id)a0;
+ (void)trackProfileLikeShow:(id)a0;
+ (BOOL)shouldShowText;


@end
