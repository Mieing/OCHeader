@class ACCMusicUIThemeModel, NSString, NSDictionary, UIViewController;
@protocol AWESearchSugViewControllerProtocol;

@interface AWEStudioMusicSearchSugViewController : NSObject <ACCMusicSearchSugViewControllerProtocol>

@property (copy, nonatomic) UIViewController<AWESearchSugViewControllerProtocol> *targetViewController;
@property (copy, nonatomic) id /* block */ sugTapBlock;
@property (copy, nonatomic) id /* block */ sugComplementTapBlock;
@property (nonatomic, getter=isWhiteStyle) BOOL whiteStyle;
@property (nonatomic) BOOL isFromStoryMovieMode;
@property (nonatomic) unsigned long long currentTabType;
@property (retain, nonatomic) ACCMusicUIThemeModel *themeModel;
@property (copy, nonatomic) NSDictionary *logAdditionParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackSearchButtonClickReturnWithQuery:(id)a0;
- (void)fetchSugWithQuery:(id)a0 tabType:(unsigned long long)a1;
- (id)targetSugVC;
- (void)setViewHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (id)view;

@end
