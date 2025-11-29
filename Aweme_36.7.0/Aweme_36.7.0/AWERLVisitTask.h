@interface AWERLVisitTask : NSObject

@property (retain, nonatomic) id item;
@property (retain, nonatomic) id context;
@property (nonatomic) BOOL visited;

+ (id)taskWithItem:(id)a0 context:(id)a1;

- (void).cxx_destruct;

@end
