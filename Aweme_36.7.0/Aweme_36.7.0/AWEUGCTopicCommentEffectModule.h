@class NSString, AWESearchUGCPageContext;

@interface AWEUGCTopicCommentEffectModule : NSObject <AWEUGCTopicModuleProtocol>

@property (retain, nonatomic) AWESearchUGCPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
