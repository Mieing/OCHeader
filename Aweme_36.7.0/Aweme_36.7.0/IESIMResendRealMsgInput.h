@class AWEIMMessage, NSDictionary, NSString, NSError;

@interface IESIMResendRealMsgInput : NSObject <IESIMSendAttachmentNodeInput>

@property (retain, nonatomic) NSError *uploadError;
@property (retain, nonatomic) AWEIMMessage *message;
@property (copy, nonatomic) NSDictionary *contentDict;
@property (copy, nonatomic) NSDictionary *passThroughTrackParams;
@property (copy, nonatomic) NSDictionary *sendContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildInputWithOutput:(id)a0 previousOutput:(id)a1 inputContext:(id)a2;

- (void).cxx_destruct;

@end
