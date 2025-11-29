@class NSString, NSArray;

@interface AWENearbyRelationCardModel : AWEBaseApiModel <AWENearbyInsertCardProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) long long locationIndex;
@property (copy, nonatomic) NSArray *candidateList;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)candidateListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)indexToInsert;
- (void).cxx_destruct;

@end
