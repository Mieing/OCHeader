@class NSString;

@interface AWEECContactPickerViewController : CNContactPickerViewController <CNContactPickerDelegate>

@property (copy, nonatomic) id /* block */ completeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openContactPickerWithcompleteBlock:(id /* block */)a0;

@end
