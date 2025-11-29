@class NSString;

@interface IESLiveActivityModule : IESLiveModule <IESLiveActivityModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)topicInterface;
- (id)welfareInterface;

@end
