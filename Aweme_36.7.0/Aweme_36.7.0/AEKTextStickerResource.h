@class NSArray, NSString;

@interface AEKTextStickerResource : AEKStickerResource

@property (nonatomic) long long presetSceneType;
@property (readonly, nonatomic) long long renderType;
@property (readonly, nonatomic) long long sourceType;
@property (readonly, nonatomic) NSArray *fontResources;
@property (nonatomic) long long categoryIndex;
@property (copy, nonatomic) NSString *categoryIdentifier;

- (id)initWithURS:(id)a0 filePath:(id)a1 resourceType:(unsigned long long)a2 renderType:(long long)a3 sourceType:(long long)a4 fontResources:(id)a5;
- (void).cxx_destruct;

@end
