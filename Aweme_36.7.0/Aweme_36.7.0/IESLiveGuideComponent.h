@class HTSEventContext, IESLiveGuideModel, NSString, IESLiveComponentContext, NSDictionary;

@interface IESLiveGuideComponent : IESLiveComponentBase

@property (retain, nonatomic) IESLiveGuideModel *room;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSString *containerID;
@property (retain, nonatomic) NSDictionary *params;

+ (BOOL)componentShouldActive:(id)a0;

- (void)setRoom:(id)a0 componentContext:(id)a1 trackContext:(id)a2;
- (void).cxx_destruct;

@end
