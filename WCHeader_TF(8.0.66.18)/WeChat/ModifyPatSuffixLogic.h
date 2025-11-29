@protocol ModifyPatSuffixLogicDelegate;

@interface ModifyPatSuffixLogic : MMObject

@property (weak, nonatomic) id<ModifyPatSuffixLogicDelegate> m_delegate;

- (void)modifiedPatSuffix:(id)a0;
- (void)oplogRet:(int)a0 errMsg:(id)a1 eventID:(unsigned int)a2 cgiWrap:(id)a3;
- (void).cxx_destruct;

@end
