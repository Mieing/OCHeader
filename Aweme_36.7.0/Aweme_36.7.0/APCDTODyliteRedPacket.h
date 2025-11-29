@class NSString;

@interface APCDTODyliteRedPacket : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL bizType;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *isShowRedPackSticker;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *taskName;
@property (copy, nonatomic) NSString *dyliteOpenAlbum;
@property (copy, nonatomic) NSString *goldAmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
