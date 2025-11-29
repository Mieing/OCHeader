@class NSNumber, IESLiveInnerFeedLiveGuideMessageCreator;

@interface IESLiveGuidePlayerMessageManager : NSObject

@property (retain, nonatomic) IESLiveInnerFeedLiveGuideMessageCreator *messageCreator;
@property (retain, nonatomic) NSNumber *roomId;
@property (copy, nonatomic) id /* block */ onReceiveMessage;

- (id)initWithRoomId:(id)a0;
- (void)startMessageWith:(id /* block */)a0;
- (void)stopMessage;
- (void).cxx_destruct;
- (void)callback:(long long)a0;
- (void)messageReceived:(id)a0;

@end
