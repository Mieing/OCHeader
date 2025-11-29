@class NSString;

@interface AWERedPacketVideoEmojiModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *image;
@property (copy, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
