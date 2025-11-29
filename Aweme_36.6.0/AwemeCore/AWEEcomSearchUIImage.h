@class NSString, NSArray;

@interface AWEEcomSearchUIImage : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (copy, nonatomic) NSArray *padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
