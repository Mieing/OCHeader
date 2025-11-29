@class NSString, AWEECBubbleInfo;

@interface AWEECGuideMallTabInfo : MTLModel <MTLJSONSerializing, NSCopying>

@property (retain, nonatomic) AWEECBubbleInfo *bubbleInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
