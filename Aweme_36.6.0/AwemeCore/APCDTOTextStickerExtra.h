@class NSString, APCDTOUser;

@interface APCDTOTextStickerExtra : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (nonatomic) long long start;
@property (nonatomic) long long end;
@property (retain, nonatomic) APCDTOUser *user;
@property (copy, nonatomic) NSString *hashtag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userJSONTransformer;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
