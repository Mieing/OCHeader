@class NSString;

@interface AWECoverNLEEditorBottomSwitchViewModel : NSObject <AWECoverNLEEditorBottomSwitchService>

@property (nonatomic) long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchToTemplateTab;
- (void)switchToTextTab;

@end
