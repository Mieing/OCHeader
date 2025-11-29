@class NSString;

@interface ACCQuickFlashPitayaFlashModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *FlashMobId;
@property (retain, nonatomic) NSString *FlashMobTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
