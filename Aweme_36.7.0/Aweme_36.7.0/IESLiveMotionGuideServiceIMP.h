@class HTSEventContext, NSString;

@interface IESLiveMotionGuideServiceIMP : NSObject <IESLiveReferenceActions, IESLiveMotionGuideProvider>

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
