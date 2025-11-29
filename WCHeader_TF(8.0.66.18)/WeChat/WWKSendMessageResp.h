@class NSString;

@interface WWKSendMessageResp : WWKBaseResp <WWKApiSerializable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serializedDict;
- (BOOL)deserializeWithDictionary:(id)a0;

@end
