@class NSString, NSArray;

@interface IESECGoodsFeedBackGroupsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *toastText;
@property (retain, nonatomic) NSArray *feedBackItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedBackItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
