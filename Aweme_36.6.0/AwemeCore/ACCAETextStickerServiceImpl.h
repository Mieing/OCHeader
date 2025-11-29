@class NSDictionary, NSMutableDictionary, NSString;

@interface ACCAETextStickerServiceImpl : NSObject <ACCAETextStickerService>

@property (retain, nonatomic) NSMutableDictionary *uuidMap;
@property (readonly, copy, nonatomic) NSDictionary *slotsUUIDMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindNewSlot:(id)a0 withOld:(id)a1;
- (void)clearUUIDMap;
- (void).cxx_destruct;
- (id)init;
- (void)removeUUID:(id)a0;

@end
