@class NSString, HTSLiveCommon;

@interface HTSLiveLotteryCandidateEventMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long lotteryId;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL participateSuccess;
@property (nonatomic) long long version;

+ (id)descriptor;

@end
