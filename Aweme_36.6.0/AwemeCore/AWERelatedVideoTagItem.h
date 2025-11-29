@class NSString, NSNumber;

@interface AWERelatedVideoTagItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tagName;
@property (nonatomic) double prob;
@property (retain, nonatomic) NSNumber *tagId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
