@class NSMutableDictionary;

@interface IESLiveLinkTaskMaker : NSObject

@property (class, readonly) id /* block */ make;

@property (retain, nonatomic) NSMutableDictionary *data;
@property (readonly) id /* block */ uniqueId;
@property (readonly) id /* block */ dependency;
@property (readonly) id /* block */ mode;
@property (readonly) id /* block */ qos;
@property (readonly) id /* block */ overTime;

- (void).cxx_destruct;
- (id)toDictionary;
- (id)init;

@end
