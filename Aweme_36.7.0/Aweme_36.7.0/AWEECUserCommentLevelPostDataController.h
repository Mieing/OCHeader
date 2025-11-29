@class NSString;

@interface AWEECUserCommentLevelPostDataController : NSObject <AWEPublishTaskMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)publishEventPostCommentVideoWithParams:(id)a0;
- (void)dealloc;

@end
