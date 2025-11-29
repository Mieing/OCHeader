@class NSDictionary;

@interface WCFinderExtraInfoToken : NSObject

@property (copy, nonatomic) id /* block */ cleanupBlock;
@property (retain, nonatomic) NSDictionary *appendDict;
@property (nonatomic) BOOL hasClean;

- (void)dealloc;
- (void)clean;
- (void).cxx_destruct;

@end
