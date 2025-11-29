@class NSMutableArray;

@interface PreModifyCheckResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *permissionStatusArray;
@property (readonly, nonatomic) unsigned long long permissionStatusArray_Count;
@property (nonatomic) BOOL grayTip;

+ (id)descriptor;

@end
