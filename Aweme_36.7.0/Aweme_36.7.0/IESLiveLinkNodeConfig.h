@class NSMutableArray;

@interface IESLiveLinkNodeConfig : NSObject

@property (retain, nonatomic) NSMutableArray *nodeList;
@property (nonatomic) long long strategy;
@property (readonly) id /* block */ addNode;
@property (readonly) id /* block */ clearStrategy;

- (void).cxx_destruct;
- (id)init;
- (id)data;

@end
