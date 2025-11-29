@class NSString;

@interface AWEStudioPublishMergeMessageService : HTSService <ACCPublishMergeMessage, AWEStudioPublishMergeMessageService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startWithPublishModel:(id)a0;

@end
