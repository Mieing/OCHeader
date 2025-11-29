@class NSString;

@interface AWEHashtagBillBoardModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long hashBoardRank;
@property (nonatomic) long long hashBoardVersionNo;
@property (copy, nonatomic) NSString *hashBoardSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
