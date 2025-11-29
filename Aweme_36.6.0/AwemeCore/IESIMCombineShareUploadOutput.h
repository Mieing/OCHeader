@class NSError, NSDictionary, NSString;

@interface IESIMCombineShareUploadOutput : NSObject <IESIMSendAttachmentNodeOutput>

@property (retain, nonatomic) NSError *uploadError;
@property (copy, nonatomic) NSDictionary *verifiedContentDict;
@property (copy, nonatomic) NSDictionary *syncedExt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fillInOutputContext:(id)a0;
- (void).cxx_destruct;

@end
