@class NSString, AWEIMUser;

@interface AWEIMGroupBlockedMemberCollectionCellModel : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long originLeftBlockTime;
@property (nonatomic) long long leftSilentBlockTime;
@property (nonatomic) long long cellType;
@property (retain, nonatomic) AWEIMUser *user;
@property (nonatomic) BOOL enableBottomLine;
@property (nonatomic) BOOL useNewStyle;

- (id)initWithConversation:(id)a0 User:(id)a1 leftBlockTime:(double)a2 cellType:(long long)a3;
- (void).cxx_destruct;

@end
