@class NSString, NSMutableDictionary, WxaFlutterViewLifeCycle, FlutterMethodChannel;

@interface WxaFlutterViewController : FlutterViewController <WxaFlutterViewControllerDelegate> {
    BOOL _disableScroll;
}

@property (retain, nonatomic) FlutterMethodChannel *channel;
@property (nonatomic) unsigned long long engineId;
@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (retain, nonatomic) WxaFlutterViewLifeCycle *lifeCycle;
@property (nonatomic) unsigned int appUuid;
@property (nonatomic) BOOL needKeepAlive;
@property (readonly, nonatomic) BOOL hasDealloc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithImpeller:(BOOL)a0 engineId:(unsigned long long)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)preDealloc;
- (void)dealloc;
- (void)setupChannelMethod;
- (void)invokeMethod:(id)a0 arguments:(id)a1;
- (void)invokeMethod:(id)a0 arguments:(id)a1 result:(id /* block */)a2;
- (void)handleMethodCall:(id)a0 result:(id /* block */)a1;
- (void)setContentOffset:(double)a0;
- (void)disableScroll:(BOOL)a0;
- (void)pauseView;
- (void)resumeView;
- (id)getActivityId;
- (id)getFlutterViewName;
- (id)getFlutterViewParams;
- (id)generateParams;
- (id)getFlutterEngine;
- (void).cxx_destruct;

@end
