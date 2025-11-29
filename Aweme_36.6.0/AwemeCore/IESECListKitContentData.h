@class NSString;

@interface IESECListKitContentData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *color;
@property (nonatomic) double fontSize;
@property (nonatomic) long long fontWeight;
@property (nonatomic) double marginLeft;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
