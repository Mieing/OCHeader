@class PTYTaskData, PTYPackage;

@interface DolphinAITaskOutputModel : NSObject

@property (retain, nonatomic) PTYTaskData *ptyOutputModel;
@property (retain, nonatomic) PTYPackage *ptyPackageModel;

- (void).cxx_destruct;

@end
