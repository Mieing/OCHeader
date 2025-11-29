@class NSString, AWEVideoPublishViewModel;
@protocol IESServiceRegister, IESServiceProvider;

@interface ACCAEFullPreviewInputData : NSObject <ACCBusinessInputData>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<IESServiceRegister, IESServiceProvider> sourceServiceContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalPreviewFrame;
@property (nonatomic) BOOL isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createId;
- (long long)inputDataType;
- (void).cxx_destruct;

@end
