@class NSString;

@interface IESLivePKCommonFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)messageReceived:(id)a0;

@end
