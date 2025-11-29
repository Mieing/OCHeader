@class NSPredicate;

@interface Regex : NSObject

@property (retain, nonatomic) NSPredicate *predicate;

- (BOOL)isMatch:(id)a0;
- (void).cxx_destruct;
- (id)initWithPattern:(id)a0;

@end
