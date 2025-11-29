@class NSString;

@interface AWEFeedQuickFlashStickerTagStyleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)valid;
- (void).cxx_destruct;

@end
