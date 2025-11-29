@class NSString, NSDictionary;
@protocol YataRenderObjectInterface;

@interface IESECOrderEventChain : NSObject

@property (retain, nonatomic) id<YataRenderObjectInterface> node;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *fields;
@property (copy, nonatomic) NSString *scene;

- (void).cxx_destruct;

@end
