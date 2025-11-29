@class NSString, IESECURLModel;

@interface IESECFeedResourceCardSearchItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long productId;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) IESECURLModel *searchImage;
@property (retain, nonatomic) IESECURLModel *jumpURL;
@property (copy, nonatomic) NSString *queryId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
