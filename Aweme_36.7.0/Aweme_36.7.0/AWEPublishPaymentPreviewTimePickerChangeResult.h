@class NSIndexPath;

@interface AWEPublishPaymentPreviewTimePickerChangeResult : NSObject

@property (nonatomic, getter=isNeedReloadComponent) BOOL needReloadComponent;
@property (nonatomic) long long reloadComponent;
@property (nonatomic, getter=isNeedSelectIndexPath) BOOL needSelectIndexPath;
@property (retain, nonatomic) NSIndexPath *selectIndexPath;
@property (nonatomic) long long selectValue;

- (void).cxx_destruct;

@end
