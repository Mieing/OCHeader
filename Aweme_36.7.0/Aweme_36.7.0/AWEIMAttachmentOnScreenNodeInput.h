@class AWEIMSendMessageAttachmentObject, NSMutableArray, NSString;

@interface AWEIMAttachmentOnScreenNodeInput : NSObject <IESIMSendAttachmentNodeInput>

@property (retain, nonatomic) AWEIMSendMessageAttachmentObject *sendObj;
@property (retain, nonatomic) NSMutableArray *dbModelArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildInputWithOutput:(id)a0 previousOutput:(id)a1 inputContext:(id)a2;

- (void).cxx_destruct;

@end
