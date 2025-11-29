@class NSMutableArray;

@interface ToolbarMultiStreamPayLoad : IESLivePBBaseMessage

@property (nonatomic) int bizType;
@property (retain, nonatomic) NSMutableArray *multiStreamCamerasArray;
@property (readonly, nonatomic) unsigned long long multiStreamCamerasArray_Count;

+ (id)descriptor;

@end
