@class NSString;

@interface CAKAlbumBottomViewConfig : NSObject

@property (nonatomic) BOOL enableSwitchMultiSelect;
@property (copy, nonatomic) NSString *titleLabelText;
@property (nonatomic) BOOL shouldHideBottomViewWhenNotSelect;
@property (nonatomic) BOOL ignoreFocusCellWhenHideBottomView;
@property (nonatomic) BOOL shouldShowOriginalImageButton;
@property (nonatomic) BOOL enableSelectOriginalImageButton;

- (void).cxx_destruct;
- (id)init;

@end
