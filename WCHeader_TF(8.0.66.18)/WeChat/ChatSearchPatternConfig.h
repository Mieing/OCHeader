@class NSArray;

@interface ChatSearchPatternConfig : NSObject

@property (copy, nonatomic) NSArray *blackPatternList;
@property (copy, nonatomic) NSArray *patternList;
@property (nonatomic) int timeout;
@property (nonatomic) int timevalSec;

- (void).cxx_destruct;

@end
