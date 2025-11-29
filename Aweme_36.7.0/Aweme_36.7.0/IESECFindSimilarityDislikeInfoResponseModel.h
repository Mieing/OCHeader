@class NSString;

@interface IESECFindSimilarityDislikeInfoResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *toastContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
