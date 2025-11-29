@protocol TIMXUserProfileProtocol;

@interface TIMXFriendApply : NSObject

@property (nonatomic) long long userId;
@property (nonatomic) long long applyTimeSecond;
@property (nonatomic) long long status;
@property (retain, nonatomic) id<TIMXUserProfileProtocol> profile;

- (id)initWithRootObject:(id)a0 pbModel:(id)a1;
- (void).cxx_destruct;

@end
