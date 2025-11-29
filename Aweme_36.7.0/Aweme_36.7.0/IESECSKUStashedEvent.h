@class NSString, NSDictionary;
@protocol YataRenderObjectInterface;

@interface IESECSKUStashedEvent : NSObject

@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *opportunity;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) BOOL hold;
@property (retain, nonatomic) id<YataRenderObjectInterface> renderObject;

- (void).cxx_destruct;

@end
