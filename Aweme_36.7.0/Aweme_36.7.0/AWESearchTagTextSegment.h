@class NSString;

@interface AWESearchTagTextSegment : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *words;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) BOOL isBold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
