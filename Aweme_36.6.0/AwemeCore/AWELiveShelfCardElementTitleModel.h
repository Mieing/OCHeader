@class NSArray, NSString, NSNumber, AWELiveShelfElementMediaModel;

@interface AWELiveShelfCardElementTitleModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *content;
@property (retain, nonatomic) AWELiveShelfElementMediaModel *icon;
@property (copy, nonatomic) NSNumber *lineNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
