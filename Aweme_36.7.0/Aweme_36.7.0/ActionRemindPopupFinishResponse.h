@class ActionRemindPopupFinishData;

@interface ActionRemindPopupFinishResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ActionRemindPopupFinishData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
