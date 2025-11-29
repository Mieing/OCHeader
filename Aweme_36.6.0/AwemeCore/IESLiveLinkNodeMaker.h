@class NSMutableDictionary;

@interface IESLiveLinkNodeMaker : NSObject

@property (class, readonly) id /* block */ make;

@property (retain, nonatomic) NSMutableDictionary *data;
@property (readonly) id /* block */ nodeId;
@property (readonly) id /* block */ interfaceService;
@property (readonly) id /* block */ valid;
@property (readonly) id /* block */ headerCheck;
@property (readonly) id /* block */ tailCheck;
@property (readonly) id /* block */ addTaskList;

- (void).cxx_destruct;
- (id)toDictionary;
- (id)init;

@end
