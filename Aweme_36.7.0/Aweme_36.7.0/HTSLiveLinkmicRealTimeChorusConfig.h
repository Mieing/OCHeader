@class NSMutableArray;

@interface HTSLiveLinkmicRealTimeChorusConfig : IESLivePBBaseMessage

@property (nonatomic) BOOL globalValid;
@property (nonatomic) long long allowListId;
@property (retain, nonatomic) NSMutableArray *stageListArray;
@property (readonly, nonatomic) unsigned long long stageListArray_Count;

+ (id)descriptor;

@end
