@class NSString;

@interface MMAssetMessageUUIDWrap : NSObject <PBCoding>

@property (retain, nonatomic) NSString *assetID;
@property (retain, nonatomic) NSString *messageUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_assetID;
+ (void)PBArrayAdd_messageUUID;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
