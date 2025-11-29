@class NSString;

@interface AWEIMMailViewController : MFMailComposeViewController <MFMailComposeViewControllerDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMailAddress:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;

@end
