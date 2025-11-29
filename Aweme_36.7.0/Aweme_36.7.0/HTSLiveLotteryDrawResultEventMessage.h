@class NSString, HTSLiveCommon, NSMutableArray;

@interface HTSLiveLotteryDrawResultEventMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long lotteryId;
@property (retain, nonatomic) NSMutableArray *userIdsArray;
@property (readonly, nonatomic) unsigned long long userIdsArray_Count;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
