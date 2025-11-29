@class NSString, ACCTrimCropBarItem, ACCCropEditorViewController;
@protocol ACCTrimCropEditorConfigProtocol, IESServiceProvider;

@interface ACCTCECropEditorBar : NSObject <ACCTrimCropBarProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCTrimCropEditorConfigProtocol> editorConfig;
@property (retain, nonatomic) ACCTrimCropBarItem *barItem;
@property (retain, nonatomic) ACCCropEditorViewController *subViewControlelr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subViewController;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
