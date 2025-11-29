@class AWEIMSendMessageAttachmentObject, NSMutableArray, NSString;

@interface AWEIMAttachmentDBModelNodeOutput : NSObject <IESIMSendAttachmentNodeOutput>

@property (retain, nonatomic) NSMutableArray *dbModelArray;
@property (retain, nonatomic) AWEIMSendMessageAttachmentObject *sendObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fillInOutputContext:(id)a0;
- (void).cxx_destruct;

@end
