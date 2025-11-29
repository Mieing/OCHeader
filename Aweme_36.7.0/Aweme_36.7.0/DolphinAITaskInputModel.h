@class NSString, PTYTaskData, PTYTaskConfig;

@interface DolphinAITaskInputModel : NSObject

@property (copy, nonatomic) NSString *business;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *creativeId;
@property (retain, nonatomic) PTYTaskData *ptyInputModel;
@property (retain, nonatomic) PTYTaskConfig *ptyConfigModel;

- (void).cxx_destruct;

@end
