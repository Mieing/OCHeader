@class NSString, HTSLiveUser;

@interface IESLiveLinkMicProfitRoomBattleRandomMatchMatchingContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *openingTimeTitle;
@property (nonatomic) long long matchingExpectedTime;
@property (nonatomic) BOOL isMatching;
@property (copy, nonatomic) NSString *operatorUserId;
@property (retain, nonatomic) HTSLiveUser *anchorUser;
@property (nonatomic) BOOL hasAnchorUser;

+ (id)descriptor;

@end
