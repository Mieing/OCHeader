@class NSString;

@interface IESECShopLiveTabTransitionContext : NSObject

@property (nonatomic) BOOL playerReused;
@property (copy, nonatomic) NSString *roomSchema;
@property (nonatomic) unsigned long long enterSource;
@property (nonatomic) BOOL animated;
@property (copy, nonatomic) id /* block */ enterCompletion;
@property (copy, nonatomic) id /* block */ exitCompletion;

+ (id)contextWithAnimated:(BOOL)a0;
+ (id)contextWithAnimated:(BOOL)a0 playerReused:(BOOL)a1 roomSchema:(id)a2 enterSource:(unsigned long long)a3;
+ (id)contextWithEnterSource:(unsigned long long)a0;
+ (id)contextWithPlayerReused:(BOOL)a0 enterSource:(unsigned long long)a1;
+ (id)contextWithRoomSchema:(id)a0 enterSource:(unsigned long long)a1;

- (void).cxx_destruct;

@end
