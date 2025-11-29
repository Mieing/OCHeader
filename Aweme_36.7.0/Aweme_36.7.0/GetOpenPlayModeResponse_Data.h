@class GPBEnumArray;

@interface GetOpenPlayModeResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) GPBEnumArray *openPlayModesArray;
@property (readonly, nonatomic) unsigned long long openPlayModesArray_Count;

+ (id)descriptor;

@end
