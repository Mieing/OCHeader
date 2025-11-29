@class NSString, UIViewController, AWEAwemeModel;
@protocol AWEFeedHotSpotPanelProtocol;

@interface AWESpecialCardLynxPreCreateModel : NSObject <AWESpecialCardCacheModelProtocol>

@property (nonatomic) long long status;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIViewController<AWEFeedHotSpotPanelProtocol> *panelVC;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
