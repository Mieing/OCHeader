@class UIViewController, ACCStickerContainerView, AWEVideoPublishViewModel;
@protocol ACCEditorDraftService, ACCEditServiceProtocol;

@interface ACCEditLyricsStickerInputData : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) long long stickerId;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalMediaContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalStandardPlayerFrame;
@property (nonatomic) double originalContainerCornerRadius;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCEditorDraftService> draftService;
@property (weak, nonatomic) UIViewController *containerViewController;
@property (nonatomic) BOOL disableChangeMusic;

- (void).cxx_destruct;

@end
