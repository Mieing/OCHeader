@class NSString;

@interface TSPKCallStackRuleInfo : NSObject

@property (copy, nonatomic) NSString *className;
@property (copy, nonatomic) NSString *selName;
@property (nonatomic) BOOL isMeta;
@property (copy, nonatomic) NSString *binaryName;
@property (nonatomic) unsigned long long slide;
@property (nonatomic) unsigned long long start;
@property (nonatomic) unsigned long long end;

- (unsigned long long)vmOffset;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)uniqueKey;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (BOOL)isCompleted;

@end
