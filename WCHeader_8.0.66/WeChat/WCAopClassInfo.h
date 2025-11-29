@class NSArray, WCAopBlockImp, WCAopLock;

@interface WCAopClassInfo : NSObject

@property (retain, nonatomic) NSArray *beforeActions;
@property (retain, nonatomic) WCAopBlockImp *replaceBlock;
@property (retain, nonatomic) NSArray *afterActions;
@property (nonatomic) unsigned long long frameLength;
@property (nonatomic) unsigned long long instanceCount;
@property (nonatomic) BOOL returnValueOnStack;
@property (retain, nonatomic) NSArray *parameterInfo;
@property (nonatomic) void /* function */ *originIMP;
@property (weak, nonatomic) Class currentClass;
@property (weak, nonatomic) Class metaClass;
@property (nonatomic) const char *methodType;
@property (weak, nonatomic) WCAopLock *classLock;
@property (nonatomic) struct WCAopIMP { } *aopIMP;
@property (nonatomic) SEL selector;
@property (nonatomic) BOOL isClassMethod;

- (BOOL)isClear;
- (void).cxx_destruct;

@end
