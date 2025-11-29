@class NSString;
@protocol IESLiveViewZoomService;

@interface IESLiveViewZoomServiceWrapper : NSObject <IESLiveViewZoomService>

@property (retain, nonatomic) id<IESLiveViewZoomService> viewZoomService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)viewZoomModeOn;
- (unsigned long long)currentViewZoomMode;
- (double)currentViewZoomScale;
- (id)initWithViewZoomService:(id)a0;
- (void).cxx_destruct;

@end
