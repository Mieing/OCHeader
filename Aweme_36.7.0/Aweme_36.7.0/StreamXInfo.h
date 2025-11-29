@class NSMutableArray;

@interface StreamXInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *settingsArray;
@property (readonly, nonatomic) unsigned long long settingsArray_Count;

+ (id)descriptor;

@end
