@class NSMutableDictionary;

@interface EPJSON_CFGNode : NSObject

@property (nonatomic) BOOL terminal;
@property (retain, nonatomic) NSMutableDictionary *children;
@property (retain, nonatomic) EPJSON_CFGNode *star;

- (void).cxx_destruct;
- (id)init;

@end
