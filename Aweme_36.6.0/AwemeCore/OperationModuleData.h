@class NSString, OperationLabel, HTSLiveRoom;

@interface OperationModuleData : IESLivePBBaseMessage

@property (retain, nonatomic) OperationLabel *operationLabel;
@property (nonatomic) BOOL hasOperationLabel;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) BOOL hasRoom;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *moduleName;
@property (nonatomic) BOOL priorityDisplay;
@property (nonatomic) int moduleSource;

+ (id)descriptor;

@end
