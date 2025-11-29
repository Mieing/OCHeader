@class NSString;
@protocol IESIMMessageExternalRefContextProvider;

@interface IESIMMessageListInputExternalRefComponent : AWEIMComponentBase <IESIMMessageListInputExternalRefInterface, AWEIMMessageListDataAction>

@property (retain, nonatomic) id<IESIMMessageExternalRefContextProvider> contextProvider;
@property (nonatomic) BOOL hasSetupContextProvider;
@property (nonatomic) BOOL hasSentMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didReceiveSendMessageResponse:(id)a0 message:(id)a1 result:(BOOL)a2;
- (void)setupExternalRefIfNeeded;
- (void)setupRef:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
