@class NSString;

@interface IESECContactPickViewController : CNContactPickerViewController <CNContactPickerDelegate>

@property (copy, nonatomic) id /* block */ completeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openContactPickerWithcompleteHandle:(id /* block */)a0;

@end
