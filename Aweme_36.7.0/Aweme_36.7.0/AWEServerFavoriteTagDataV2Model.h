@class NSString, NSArray;

@interface AWEServerFavoriteTagDataV2Model : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL renderAsPrimary;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *tabData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
