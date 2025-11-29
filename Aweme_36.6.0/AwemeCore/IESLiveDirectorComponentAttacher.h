@class HTSEventContext, NSString, IESLiveComponentContext;

@interface IESLiveDirectorComponentAttacher : NSObject <IESLiveComponentAttacher>

@property (readonly, nonatomic) IESLiveComponentContext *componentContext;
@property (readonly, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
