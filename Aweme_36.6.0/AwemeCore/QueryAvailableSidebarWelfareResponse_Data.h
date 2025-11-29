@class NSString, NSMutableArray;

@interface QueryAvailableSidebarWelfareResponse_Data : IESLivePBBaseMessage

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSMutableArray *welfareIdListArray;
@property (readonly, nonatomic) unsigned long long welfareIdListArray_Count;
@property (nonatomic) int completeTimes;

+ (id)descriptor;

@end
