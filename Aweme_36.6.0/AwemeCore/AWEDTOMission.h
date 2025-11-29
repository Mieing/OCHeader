@class NSString;

@interface AWEDTOMission : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *reserved_kw_id;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isAssign;
@property (nonatomic) BOOL excludeCustomStickerEntrance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
