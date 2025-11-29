@class NSMutableArray;

@interface GetVideoOperateConfigResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *alreadyAddVideoIdsArray;
@property (readonly, nonatomic) unsigned long long alreadyAddVideoIdsArray_Count;
@property (nonatomic) long long maxVideoCount;
@property (nonatomic) long long maxChallengeCount;
@property (nonatomic) long long onceAddCountLimit;
@property (nonatomic) long long onceDelCountLimit;

+ (id)descriptor;

@end
