@class NSString, NSArray;

@interface IESLiveVSFeedChainMatchModel : NSObject

@property (readonly, nonatomic) long long matchID;
@property (readonly, copy, nonatomic) NSString *matchTitle;
@property (readonly, copy, nonatomic) NSArray *matchBackgroundURLs;
@property (readonly, copy, nonatomic) NSString *leftName;
@property (readonly, copy, nonatomic) NSString *leftScore;
@property (readonly, copy, nonatomic) NSArray *leftIconURLs;
@property (readonly, copy, nonatomic) NSString *rightName;
@property (readonly, copy, nonatomic) NSString *rightScore;
@property (readonly, copy, nonatomic) NSArray *rightIconURLs;

- (id)initWithData:(id)a0 matchBackground:(id)a1;
- (void).cxx_destruct;

@end
