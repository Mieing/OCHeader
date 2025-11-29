@class NSString, NSMutableArray, NSMutableDictionary;

@interface HTSLiveMultiChorusInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *userIdsArray;
@property (readonly, nonatomic) unsigned long long userIdsArray_Count;
@property (copy, nonatomic) NSString *leaderUserId;
@property (nonatomic) long long songId;
@property (nonatomic) int songType;
@property (retain, nonatomic) NSMutableDictionary *userBaseMap;
@property (readonly, nonatomic) unsigned long long userBaseMap_Count;
@property (copy, nonatomic) NSString *chorusId;

+ (id)descriptor;

@end
