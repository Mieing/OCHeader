@class IESECLiveDialogButtonElement, NSString, NSDictionary, IESECLiveDialogContentElement;

@interface IESECLiveAtomicServerActionDialog : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) IESECLiveDialogContentElement *content;
@property (retain, nonatomic) IESECLiveDialogButtonElement *confirmButton;
@property (retain, nonatomic) IESECLiveDialogButtonElement *cancelButton;
@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
