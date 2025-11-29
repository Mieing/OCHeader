@interface MMWebViewPageInfoModel : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } lastClickPos;
@property (nonatomic) unsigned long long lastClickTs;
@property (nonatomic) BOOL disableContextMenu;
@property (nonatomic) BOOL disableExposeAlert;
@property (nonatomic) BOOL hasSetDisableExposeAlert;

@end
