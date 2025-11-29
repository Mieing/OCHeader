@class NSString;

@interface IESLiveActivityModule : IESLiveModule <IESLiveActivityModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)activityABManager;
- (id)topicInterface;
- (id)hotNewsInterface;
- (id)welfareInterface;
- (id)flowerInterface;
- (id)groupLiveCommonContainerInterface;

@end
