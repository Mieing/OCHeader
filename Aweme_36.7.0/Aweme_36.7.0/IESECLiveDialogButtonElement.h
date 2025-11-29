@class NSString, IESECLiveAtomicServerActionBase;

@interface IESECLiveDialogButtonElement : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) IESECLiveAtomicServerActionBase *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
