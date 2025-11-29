@class NSString, NSDictionary, AWEIMSharedViewControllerInstanceRouterAction, IESIMTabBizTrackModel;

@interface AWEIMMessageTabContext : AWEIMComponentContext

@property (retain, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) IESIMTabBizTrackModel *bizTrackModel;
@property (retain, nonatomic) NSString *gdLabel;
@property (nonatomic) BOOL hideStatusBar;
@property (nonatomic) long long tabBarPreviousIndex;
@property (retain, nonatomic) AWEIMSharedViewControllerInstanceRouterAction *lastRouterAction;
@property (nonatomic) unsigned long long messagePageEnterTab;

- (BOOL)isEnterFromMsgTab;
- (void).cxx_destruct;

@end
