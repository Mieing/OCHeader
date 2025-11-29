@class NSString;

@interface IESLiveShortTouchDebugView : UILabel <HTSLivePluginLayoutView>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *viewType;
@property (nonatomic) struct CGSize { double width; double height; } pluginLayoutContentSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } pluginLayoutContentInsets;

- (void).cxx_destruct;

@end
