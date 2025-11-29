@class NSString, AWEURLModel;

@interface AWEProfileCoverURLModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *urlModel;
@property (copy, nonatomic) NSString *lightCoverColor;
@property (copy, nonatomic) NSString *darkCoverColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)urlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
