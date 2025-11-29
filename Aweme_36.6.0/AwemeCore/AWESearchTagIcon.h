@class NSString, NSNumber, NSArray;

@interface AWESearchTagIcon : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *URI;
@property (copy, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSNumber *width;
@property (copy, nonatomic) NSArray *capInsets;
@property (retain, nonatomic) NSNumber *alpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
