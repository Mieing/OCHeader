@class NSString;
@protocol IESLiveInteractComponentContext, IESLiveInteractComponentRoomContext;

@interface IESLiveInteractComponentBase : NSObject <IESLiveInteractComponent>

@property (weak, nonatomic) id<IESLiveInteractComponentRoomContext> roomContext;
@property (weak, nonatomic) id<IESLiveInteractComponentContext> context;
@property (nonatomic, getter=isMounted) BOOL mounted;
@property (nonatomic) BOOL didJoinChannel;
@property (nonatomic) BOOL isFeed;
@property (nonatomic) long long loadLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)componentBindContext;
- (void)componentDidChangedFromLayout:(id)a0 toLayout:(id)a1;
- (void)componentWillChangedFromLayout:(id)a0 toLayout:(id)a1;
- (void).cxx_destruct;

@end
