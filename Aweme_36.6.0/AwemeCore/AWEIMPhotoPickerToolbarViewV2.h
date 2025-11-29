@class AWEIMPhotoPickerFunctionModel, NSString, NSMutableArray, UIButton;
@protocol AWEIMPhotoPickerToolbarDelegate;

@interface AWEIMPhotoPickerToolbarViewV2 : UIView

@property (nonatomic) unsigned long long sceneType;
@property (retain, nonatomic) AWEIMPhotoPickerFunctionModel *useOriginModel;
@property (retain, nonatomic) NSMutableArray *viewModelArr;
@property (nonatomic) unsigned long long sendCount;
@property (retain, nonatomic) NSString *sendButtonTitle;
@property (retain, nonatomic) UIButton *sendButton;
@property (nonatomic) BOOL isEnableEdit;
@property (nonatomic) BOOL defaultOriginSelect;
@property (weak, nonatomic) id<AWEIMPhotoPickerToolbarDelegate> delegate;

- (void)setupViewModel;
- (id)initWithSceneType:(unsigned long long)a0 isEnableEdit:(BOOL)a1;
- (BOOL)useOrigin;
- (void)selectUseOrigin:(BOOL)a0;
- (id)initWithSceneType:(unsigned long long)a0 isEnableEdit:(BOOL)a1 defaultOriginSelect:(BOOL)a2;
- (void)onSendButtonTapped;
- (void).cxx_destruct;
- (void)setupView;

@end
