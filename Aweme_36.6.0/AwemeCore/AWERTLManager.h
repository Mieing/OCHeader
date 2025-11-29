@class NSSet;

@interface AWERTLManager : NSObject

@property (nonatomic) BOOL enableRTL;
@property (copy, nonatomic) NSSet *flipImageNames;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
