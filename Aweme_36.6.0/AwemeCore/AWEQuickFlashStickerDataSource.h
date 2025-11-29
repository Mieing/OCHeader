@class NSString;

@interface AWEQuickFlashStickerDataSource : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sourceId;
@property (nonatomic) unsigned long long sourceFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
