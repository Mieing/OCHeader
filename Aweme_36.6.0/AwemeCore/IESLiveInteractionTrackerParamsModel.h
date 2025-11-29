@class HTSEventContext, NSString;

@interface IESLiveInteractionTrackerParamsModel : NSObject <IESLiveInteractionTrackerParamsBuildable>

@property (retain, nonatomic) HTSEventContext *eventContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableBuild;
- (void).cxx_destruct;
- (id)build;

@end
