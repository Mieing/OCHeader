@class NSDictionary, NSNumber;

@interface LSIMMessageCardRobotCellVM : LSIMMessageCardBaseCellVM

@property (copy, nonatomic) NSDictionary *msgValue;
@property (retain, nonatomic) NSNumber *hasSwtichHumanFlagNumber;

- (void)sendSwitchToHumanMessage;
- (void)handleMessage;
- (BOOL)hasSwtichHumanFlag;
- (void).cxx_destruct;

@end
