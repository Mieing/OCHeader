@class HTSEventContext, NSString, IESLiveLGameAudienceModel;
@protocol IESLiveRoomService;

@interface IESLiveLGameAudienceTrackerContext : NSObject <IESLiveLGameTrackerContext>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveLGameAudienceModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
