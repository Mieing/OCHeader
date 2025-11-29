@class NSString;

@interface ACCShootSameStickerHandlerFactoryVideoComment : NSObject <ACCShootSameStickerHandlerFactoryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createHandlerWithStickerModel:(id)a0 shootSameStickerModel:(id)a1 configDelegation:(id)a2;
- (void)fillPublishModelWithStickerModel:(id)a0 shootSameStickerModel:(id)a1;

@end
