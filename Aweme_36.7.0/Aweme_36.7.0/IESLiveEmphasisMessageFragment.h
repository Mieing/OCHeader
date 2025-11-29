@class NSString, NSMutableDictionary;

@interface IESLiveEmphasisMessageFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber>

@property (retain, nonatomic) NSMutableDictionary *componentMap;
@property (nonatomic) BOOL enableTopic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)handleEmphasisContainer:(id)a0;
- (id)getComponentType:(long long)a0;
- (id)emphasisComponentWithType:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (void)removeAllComponents;

@end
