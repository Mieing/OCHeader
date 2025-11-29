@class NSArray, NSString, NSMutableArray;

@interface AigcEffectTaskData : IESLivePBBaseMessage

@property (retain, nonatomic) NSArray *imageDataList;
@property (nonatomic) BOOL downloading;
@property (nonatomic) long long taskId;
@property (nonatomic) int status;
@property (nonatomic) int finishReason;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) long long effectId;
@property (retain, nonatomic) NSMutableArray *aigcBackgroundArray;
@property (readonly, nonatomic) unsigned long long aigcBackgroundArray_Count;

+ (id)descriptor;

- (long long)availableImageCount;
- (void)jointAigcAvailableImageList:(id)a0;
- (void)downloadAigcBgImages:(id /* block */)a0;
- (id)description;

@end
