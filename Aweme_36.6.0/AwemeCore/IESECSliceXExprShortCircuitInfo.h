@class IESECSliceXExprCoreJumpCommand;

@interface IESECSliceXExprShortCircuitInfo : NSObject {
    IESECSliceXExprCoreJumpCommand *_firstJumpCommand;
    unsigned long long _firstJumpCommandIndex;
    IESECSliceXExprCoreJumpCommand *_secondJumpCommand;
    unsigned long long _secondJumpCommandIndex;
}

- (void).cxx_destruct;

@end
