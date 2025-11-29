@class CIContext;

@interface TAVContextManager : NSObject

@property (retain, nonatomic) CIContext *CIContext;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
