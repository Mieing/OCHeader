@class UINavigationController, NSString;
@protocol IESLiveIMService;

@interface IESLivePlayTogetherGroupSettingPageServiceImpl : NSObject <UINavigationControllerDelegate, IESLivePlayTogetherGroupSettingPageService>

@property (nonatomic) struct CGSize { double width; double height; } fansGroupAdminViewSize;
@property (retain, nonatomic) UINavigationController *fansGroupShowNavigationController;
@property (retain, nonatomic) id<IESLiveIMService> imService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
