@class NSString, FinderTingEntryPlugin;

@interface WCFinderTingEntryFlutterVC : MMFlutterViewController

@property (retain, nonatomic) FinderTingEntryPlugin *finderTingEntryPlugin;
@property (copy, nonatomic) NSString *tid;

- (void)onClickTingEntryJump;
- (void)onClickTingEntryClose;
- (void).cxx_destruct;

@end
