@class NSString, NSArray, IESECSearchSuggestWordRecord, IESECURLModel;

@interface IESECSearchSuggestItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) IESECSearchSuggestWordRecord *wordRecord;
@property (copy, nonatomic) NSArray *highlightPositions;
@property (copy, nonatomic) IESECURLModel *tagIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)highlightPositionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
