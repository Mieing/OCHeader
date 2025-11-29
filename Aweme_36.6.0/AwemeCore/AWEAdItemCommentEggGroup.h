@class NSArray, NSString;

@interface AWEAdItemCommentEggGroup : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *editHints;
@property (nonatomic) BOOL randomHint;
@property (nonatomic) long long commentEggsType;
@property (copy, nonatomic) NSString *commentEggsRegex;
@property (copy, nonatomic) NSArray *itemCommentEggList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)editHintsJSONTransformer;
+ (id)itemCommentEggListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
