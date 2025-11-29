@class NSString, WCTimelineWindowSession;

@interface WCTimelineWindowSessionMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCTimelineWindowSession *currentTimelineWindowSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
