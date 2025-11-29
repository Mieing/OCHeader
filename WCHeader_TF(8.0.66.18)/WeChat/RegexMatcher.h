@class NSMutableCharacterSet, NSMutableArray;

@interface RegexMatcher : NSObject

@property (copy, nonatomic) NSMutableArray *regexNotGreedArray;
@property (copy, nonatomic) NSMutableArray *regexGreedArray;
@property (copy, nonatomic) NSMutableCharacterSet *identifierSet;
@property (nonatomic) BOOL overLimited;

- (id)init;
- (id)extractWord:(id)a0;
- (id)extractWord:(id)a0 level:(int)a1;
- (BOOL)isLegalWord:(id)a0;
- (void).cxx_destruct;

@end
