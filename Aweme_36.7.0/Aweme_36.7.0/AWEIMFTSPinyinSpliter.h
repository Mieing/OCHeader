@class NSArray, NSMutableArray, NSString;

@interface AWEIMFTSPinyinSpliter : NSObject

@property (copy, nonatomic) NSArray *oneShengmuList;
@property (copy, nonatomic) NSArray *twoShengmuList;
@property (copy, nonatomic) NSArray *oneYunmuList;
@property (copy, nonatomic) NSArray *twoYunmuList;
@property (copy, nonatomic) NSArray *threeYunmuList;
@property (copy, nonatomic) NSArray *tailYunmuList;
@property (copy, nonatomic) NSArray *allList;
@property (retain, nonatomic) NSMutableArray *solutionList;
@property (copy, nonatomic) NSString *text;

- (void)splitAtIndex:(long long)a0 lastComponent:(id)a1 splitText:(id)a2;
- (BOOL)p_checkComponentIsShengmu:(id)a0;
- (BOOL)p_checkComponentIsDependentOneYunmu:(id)a0;
- (BOOL)p_checkComponnent:(id)a0 canJoinLastComponent:(id)a1;
- (BOOL)p_checkComponentIsJoinYunmu:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0;
- (id)split;

@end
