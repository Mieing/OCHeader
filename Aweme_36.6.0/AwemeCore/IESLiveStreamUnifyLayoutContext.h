@class HTSEventContext, UIView;
@protocol IESLiveRoomService;

@interface IESLiveStreamUnifyLayoutContext : NSObject

@property (retain, nonatomic) HTSEventContext *eventContext;
@property (readonly, nonatomic) long long scene;
@property (readonly, weak, nonatomic) UIView *mediaContainer;
@property (readonly, nonatomic) BOOL isPreview;
@property (readonly, nonatomic) id<IESLiveRoomService> roomModel;

- (id)trackParams;
- (void)removeAllAttributes;
- (id)initWithScene:(long long)a0 roomModel:(id)a1;
- (void)updateMediaContainer:(id)a0;
- (void)updateRoomModel:(id)a0;
- (void).cxx_destruct;
- (id)valueForAttribute:(id)a0;
- (void)addAttribute:(id)a0 value:(id)a1;

@end
