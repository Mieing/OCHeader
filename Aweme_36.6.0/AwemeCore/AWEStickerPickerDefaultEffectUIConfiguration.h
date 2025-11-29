@class NSString;

@interface AWEStickerPickerDefaultEffectUIConfiguration : NSObject <AWEStickerPickerEffectUIConfigurationProtocol>

@property (copy, nonatomic) id /* block */ effectListReloadHanlder;
@property (nonatomic) BOOL inIMRecordPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)shootButtonHeight;
- (double)shootButtonBottomOffset;
- (id)effectListViewBackgroundColor;
- (double)effectListViewHeight;
- (Class)stickerItemCellClass;
- (id)stickerListViewLayout;
- (id)effectListLoadingView;
- (id)effectListErrorView;
- (id)effectListEmptyView;
- (id)shootButtonBackgroundColor;
- (id)shootButtonTextColor;
- (id)shootButtonTextFont;
- (double)contentInsetBottomForShootButton;
- (BOOL)errorContainerViewDisableTapGesture;
- (void).cxx_destruct;

@end
