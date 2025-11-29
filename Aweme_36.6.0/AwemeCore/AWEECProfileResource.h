@class NSString, AWEECProfilePadding;

@interface AWEECProfileResource : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long index;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long fontSize;
@property (copy, nonatomic) NSString *fontColor;
@property (copy, nonatomic) NSString *image;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (retain, nonatomic) AWEECProfilePadding *padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
