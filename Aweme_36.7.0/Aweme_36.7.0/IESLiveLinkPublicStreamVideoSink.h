@class NSString;
@protocol IESLiveLinkPublicStreamVideoSinkDelegate;

@interface IESLiveLinkPublicStreamVideoSink : NSObject <ByteRTCVideoSinkDelegate>

@property (copy, nonatomic) NSString *publicStreamID;
@property (nonatomic) long long pixelFormat;
@property (weak, nonatomic) id<IESLiveLinkPublicStreamVideoSinkDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFrame:(id)a0;
- (void).cxx_destruct;

@end
