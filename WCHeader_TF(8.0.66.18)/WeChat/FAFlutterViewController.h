@class NSDictionary, TingFlutterCommentInputController, NSString;

@interface FAFlutterViewController : MMFlutterViewController <TingCommentInputDelegate>

@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) TingFlutterCommentInputController *commentInputController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraPlugins;
+ (id)commonReportParams;

- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)activeCommentInput:(id)a0 result:(id /* block */)a1;
- (void).cxx_destruct;

@end
