@class IESLivePublicScreenLayoutManager;

@interface IESLivePublicScreenLayoutService : IESLiveGeneralBaseService

@property (retain, nonatomic) IESLivePublicScreenLayoutManager *layoutManager;

+ (void)ieslivekit_register_generalServiceAction;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceDidLaunch;
- (void).cxx_destruct;

@end
