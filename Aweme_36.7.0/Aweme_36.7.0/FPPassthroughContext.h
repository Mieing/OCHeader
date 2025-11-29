@class NSDictionary;
@protocol FPCreationModelPublicContext;

@interface FPPassthroughContext : NSObject

@property (readonly, nonatomic) id<FPCreationModelPublicContext> creationModel;
@property (readonly, nonatomic) NSDictionary *context;

- (void).cxx_destruct;
- (id)initWith:(id)a0 context:(id)a1;

@end
