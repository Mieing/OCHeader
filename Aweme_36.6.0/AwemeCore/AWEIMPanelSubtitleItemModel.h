@class NSDictionary, UIFont;
@protocol AWEIMShareModelProtocol, AWEIMStreakDisplayManagerProtocol;

@interface AWEIMPanelSubtitleItemModel : NSObject

@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (retain, nonatomic) UIFont *flameFont;
@property (nonatomic) struct CGSize { double width; double height; } flameSize;
@property (nonatomic) double spacing;
@property (nonatomic) BOOL needOnlineTextTail;
@property (nonatomic) double attrStringMaxWidth;
@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (copy, nonatomic) NSDictionary *defaultAttrs;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
