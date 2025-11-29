@class NSString, NSMutableArray;

@interface HTSLiveRelaxReplayItem : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *roomIdStr;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long createTime;
@property (nonatomic) BOOL isHide;
@property (retain, nonatomic) NSMutableArray *replayListArray;
@property (readonly, nonatomic) unsigned long long replayListArray_Count;

+ (id)descriptor;

@end
