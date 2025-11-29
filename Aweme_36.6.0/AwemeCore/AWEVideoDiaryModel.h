@class NSNumber, NSString, AWEURLModel;

@interface AWEVideoDiaryModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *ID;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
