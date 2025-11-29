@class AWERLComponent2;
@protocol AWERLAnimationProtocol;

@interface AWERLUpdateRequest : NSObject

@property (retain, nonatomic) AWERLComponent2 *sender;
@property (retain, nonatomic) id<AWERLAnimationProtocol> animation;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) id /* block */ event;
@property (nonatomic) BOOL fullUpdate;

- (void).cxx_destruct;

@end
