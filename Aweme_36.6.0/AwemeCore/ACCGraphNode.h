@interface ACCGraphNode : NSObject

@property (nonatomic) long long degree;
@property (retain, nonatomic) id value;

- (void).cxx_destruct;
- (id)description;

@end
