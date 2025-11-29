@protocol AWEHPCaptionBubbleModelConfigProtocol;

@interface AWEHPCaptionBubbleModel : AWEHPBaseComponentModel <NSCopying>

@property (retain, nonatomic) id<AWEHPCaptionBubbleModelConfigProtocol> contentConfig;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
