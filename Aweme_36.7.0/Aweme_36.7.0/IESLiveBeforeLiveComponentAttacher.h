@class HTSEventContext, IESLiveGuideModel, NSString, IESLiveComponentContext;

@interface IESLiveBeforeLiveComponentAttacher : NSObject <IESLiveComponentAttacher>

@property (retain, nonatomic) IESLiveGuideModel *room;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attacherForRoom:(id)a0 componentContext:(id)a1 trackContext:(id)a2;

- (id)attachingDIContext;
- (id)initWithRoom:(id)a0 componentContext:(id)a1 trackContext:(id)a2;
- (void).cxx_destruct;

@end
