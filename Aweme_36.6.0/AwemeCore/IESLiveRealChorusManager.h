@class NSString;

@interface IESLiveRealChorusManager : NSObject <HTSLiveMessageSubscriber, IESLiveRealChorusRouter>

@property (nonatomic) BOOL isVideoChorusConcertMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)isVideoChorusConcert;
- (void)messageReceived:(id)a0;

@end
