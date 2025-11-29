@class ACCTrimCropBarItem, NSArray, ACCTrimEditorViewController, NSString;
@protocol ACCTrimCropEditorConfigProtocol, IESServiceProvider;

@interface ACCTCETrimEditorBar : NSObject <ACCTrimCropBarProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCTrimCropEditorConfigProtocol> editorConfig;
@property (retain, nonatomic) NSArray *toolBarList;
@property (retain, nonatomic) ACCTrimCropBarItem *barItem;
@property (retain, nonatomic) ACCTrimEditorViewController *subViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
