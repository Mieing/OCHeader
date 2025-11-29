@protocol TIMXUserProfileProtocol;

@interface TIMXFriend : NSObject

@property (nonatomic) long long userId;
@property (nonatomic) long long applyTimeSecond;
@property (retain, nonatomic) id<TIMXUserProfileProtocol> profile;

- (id)initWithRootObject:(id)a0 pbModel:(id)a1;
- (void).cxx_destruct;

@end
