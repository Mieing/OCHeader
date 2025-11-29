@class NSString, MMFlutterViewController, FinderTingEntryFlutterAPI;

@interface FinderTingEntryPlugin : NSObject <FinderTingEntryNativeAPI, MMFlutterPlugin> {
    MMFlutterViewController *_flutterVC;
}

@property (retain, nonatomic) FinderTingEntryFlutterAPI *flutterAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)plugin;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController:(id)a0;
- (void)onClickJumpWithError:(id *)a0;
- (void)onClickCloseWithError:(id *)a0;
- (void).cxx_destruct;

@end
