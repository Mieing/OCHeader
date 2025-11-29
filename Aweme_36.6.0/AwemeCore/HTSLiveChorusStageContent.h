@class NSString, NSMutableArray, IESLiveRealTimeChorusInfo;

@interface HTSLiveChorusStageContent : IESLivePBBaseMessage

@property (nonatomic) long long chorusId;
@property (retain, nonatomic) NSMutableArray *userListArray;
@property (readonly, nonatomic) unsigned long long userListArray_Count;
@property (retain, nonatomic) IESLiveRealTimeChorusInfo *chorusInfo;
@property (nonatomic) BOOL hasChorusInfo;
@property (copy, nonatomic) NSString *chorusIdStr;

+ (id)descriptor;

@end
