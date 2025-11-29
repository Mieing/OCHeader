@class AWEIMPickerConfiguration, AWEIMAlbumModel, AWEIMComponentContext;

@interface AWEIMPickerPreivewConfigration : NSObject

@property (retain, nonatomic) AWEIMAlbumModel *album;
@property (nonatomic) long long currentSelectIndex;
@property (retain, nonatomic) AWEIMComponentContext *parentContext;
@property (retain, nonatomic) AWEIMPickerConfiguration *pickerConfig;
@property (nonatomic) BOOL isFromQuickPicker;

- (void).cxx_destruct;

@end
