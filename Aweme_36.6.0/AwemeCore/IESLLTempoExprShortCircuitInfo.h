@class IESLLTempoExprCoreJumpCommand;

@interface IESLLTempoExprShortCircuitInfo : NSObject {
    IESLLTempoExprCoreJumpCommand *_firstJumpCommand;
    unsigned long long _firstJumpCommandIndex;
    IESLLTempoExprCoreJumpCommand *_secondJumpCommand;
    unsigned long long _secondJumpCommandIndex;
}

- (void).cxx_destruct;

@end
