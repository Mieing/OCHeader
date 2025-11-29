@class NSNumber, NSString, AWEURLModel;

@interface AWEECBubbleInfo : MTLModel <MTLJSONSerializing, NSCopying>

@property (copy, nonatomic) NSNumber *productId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long lastSecond;
@property (retain, nonatomic) AWEURLModel *headPic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
