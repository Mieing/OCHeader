@interface AWEShowMonetizePopupTask : NSObject

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) AWEShowMonetizePopupTask *targetTask;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ willLoad;
@property (copy, nonatomic) id /* block */ didFailLoad;
@property (copy, nonatomic) id /* block */ didLoad;
@property (copy, nonatomic) id /* block */ willPopup;
@property (copy, nonatomic) id /* block */ didFailPopup;
@property (copy, nonatomic) id /* block */ didPopup;
@property (copy, nonatomic) id /* block */ didClose;

- (void).cxx_destruct;
- (BOOL)canRun;
- (void)run;
- (void)cancel;

@end
