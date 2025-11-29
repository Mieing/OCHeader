@class AWEIMEmoticonModel, AWEIMEmoticonThemeModel, NSString;

@interface AWEIMVerticalMutiableGIFEmoticonViewModel : NSObject <AWEIMVerticalMutiableGIFEmoticonViewModelProtocol, AWEIMBaseCollectionViewReuseCellViewModelProtocol>

@property (retain, nonatomic) AWEIMEmoticonModel *emojiModel;
@property (weak, nonatomic) AWEIMEmoticonThemeModel *themeModel;
@property (nonatomic) long long scene;
@property (nonatomic) long long sessionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
