@interface EngineGroupMemReporter : NSObject {
    unsigned long long _beforeEngineGroupCreate_All;
    unsigned long long _afterEngineGroupCreate_All;
    unsigned long long _beforeEngineGroupDestroy_All;
    unsigned long long _afterEngineGroupDestroy_All;
    unsigned long long _beforeFreeMem_All;
    unsigned long long _afterFreeMem_All;
    unsigned long long _avgMem_All;
    int _avgRecordCount;
    unsigned long long _beforeFreeMem_Vm;
    unsigned long long _afterFreeMem_Vm;
    unsigned long long _beforeFreeMem_Image;
    unsigned long long _afterFreeMem_Image;
    unsigned long long _beforeFreeMem_Picture;
    unsigned long long _afterFreeMem_Picture;
}

@property (nonatomic) long long releaseType;

+ (id)createReporter;

- (void)beforeEngineGroupCreate;
- (void)afterEngineGroupCreate;
- (void)beforeEngineGroupDestroy;
- (void)afterEngineGroupDestroy;
- (void)beforeEngineGroupFreeMem;
- (void)afterEngineGroupFreeMem;
- (void)recordAvgMem;
- (void)allBizExit;
- (void)recordBizEngine;
- (void)report:(int)a0;

@end
