@class NSString;

@interface RTVXRRoomMessageBusinessTypeTransformer : NSObject <RTVXRRoomMessageBusinessTypeTransformerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)businessTypeWithMessageType:(long long)a0;
- (long long)messageTypeWithBusinessType:(long long)a0;
- (id)allBusinessType;
- (id)messageWithBusinessTypeMapper;
- (id)businessWithMessageTypeMapper;

@end
