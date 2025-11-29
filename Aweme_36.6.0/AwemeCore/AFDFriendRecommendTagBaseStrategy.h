@class NSString;

@interface AFDFriendRecommendTagBaseStrategy : NSObject <AFDFriendRecommendTagStrategyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getAvatarListWithModel:(id)a0;
+ (id)getUserNameTextWithModel:(id)a0;
+ (id)getInfoTextWithModel:(id)a0;
+ (id)getRightBtnModelWithModel:(id)a0 context:(id)a1;
+ (unsigned long long)getCompressType;


@end
