@class AWEIMLongPressIMAwemeManager, AWEIMLongPressFeedAwemeManager, NSString, UIViewController;
@protocol AWEAwemeLongPressModalViewControllerProtocol, AWEIMAwemeMediaDownloaderProtocol;

@interface AWEIMLongPressManager : NSObject <IESIMHistoryMediaLongPressManagerProtocol>

@property (retain, nonatomic) id<AWEIMAwemeMediaDownloaderProtocol> downloader;
@property (retain, nonatomic) UIViewController<AWEAwemeLongPressModalViewControllerProtocol> *longPressVC;
@property (retain, nonatomic) AWEIMLongPressIMAwemeManager *imLongPressManager;
@property (retain, nonatomic) AWEIMLongPressFeedAwemeManager *feedLongPressManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleLongPressWithAwemeModel:(id)a0 message:(id)a1 sceneType:(long long)a2;
- (void).cxx_destruct;

@end
