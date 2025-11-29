@class NSString;

@interface AWEMessageViewController : MFMessageComposeViewController <MFMessageComposeViewControllerDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPhoneNumber:(id)a0 content:(id)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;

@end
