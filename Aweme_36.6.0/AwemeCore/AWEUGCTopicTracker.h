@class NSString, AWESearchUGCPageContext;

@interface AWEUGCTopicTracker : NSObject <AWEUGCTopicTrackerProtocol>

@property (weak, nonatomic) AWESearchUGCPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
