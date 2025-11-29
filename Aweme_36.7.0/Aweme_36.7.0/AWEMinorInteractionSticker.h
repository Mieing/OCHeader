@class NSString, NSDictionary, AWEMinorCreationSticker;

@interface AWEMinorInteractionSticker : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long stickerType;
@property (copy, nonatomic) NSString *trackInfo;
@property (retain, nonatomic) AWEMinorCreationSticker *creationSticker;
@property (copy, nonatomic) NSDictionary *trackInfoDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)creationStickerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
