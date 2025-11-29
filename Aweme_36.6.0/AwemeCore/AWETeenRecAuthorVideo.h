@class NSString, AWEURLModel;

@interface AWETeenRecAuthorVideo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) long long diggCount;
@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (nonatomic) long long awemeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
