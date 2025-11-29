@class NSString;
@protocol ACCRecorderViewContainer;

@interface AWEOpenAlbumBubbleLayoutAction : NSObject <FPLayoutAction>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)showWithCompletion:(id /* block */)a0;

@end
