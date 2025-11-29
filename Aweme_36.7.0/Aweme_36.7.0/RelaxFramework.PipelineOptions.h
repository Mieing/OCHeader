@interface RelaxFramework.PipelineOptions : NSObject

@property (nonatomic) int listId;
@property (nonatomic) int listCompId;
@property (nonatomic) long long operationId;

- (id)initWithListId:(int)a0 listCompId:(int)a1 operationId:(long long)a2;
- (id)init;

@end
