@class NSArray, WCAopBlockImp;

@interface WCAopInstanceInfo : NSObject

@property (weak, nonatomic) id originObj;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) NSArray *beforeActions;
@property (retain, nonatomic) WCAopBlockImp *replaceBlock;
@property (retain, nonatomic) NSArray *afterActions;

- (BOOL)isClear;
- (void)clear;
- (void)dealloc;
- (void).cxx_destruct;

@end
