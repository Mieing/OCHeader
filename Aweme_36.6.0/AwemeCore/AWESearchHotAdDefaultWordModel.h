@class NSString, AWEHotSearchAdDataModel;

@interface AWESearchHotAdDefaultWordModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *defaultWord;
@property (copy, nonatomic) NSString *searchWord;
@property (nonatomic) long long position;
@property (retain, nonatomic) AWEHotSearchAdDataModel *adData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
