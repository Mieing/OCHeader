@class NSMutableArray;

@interface HTSLiveMultiChorusSongItem : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *userIdsArray;
@property (readonly, nonatomic) unsigned long long userIdsArray_Count;
@property (nonatomic) BOOL isJoined;

+ (id)descriptor;

@end
