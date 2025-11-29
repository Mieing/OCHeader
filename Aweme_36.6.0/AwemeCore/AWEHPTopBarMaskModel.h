@class NSString;

@interface AWEHPTopBarMaskModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *colorARGB;
@property (nonatomic) double height;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
