@class IESLiveSwitchSceneData;

@interface SwitchSceneResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveSwitchSceneData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
