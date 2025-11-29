@class NSString, WWKMessageAttachment;

@interface WWKSendMessageReq : WWKBaseReq <WWKApiSerializable>

@property (retain, nonatomic) WWKMessageAttachment *attachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serializedDict;
- (BOOL)deserializeWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
