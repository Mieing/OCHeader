@class NSArray, NSString;

@interface AWEIMWorkSpaceCardResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *workSpaceCards;
@property (nonatomic) BOOL newWorkSpace;
@property (copy, nonatomic) NSString *jumpSchema;

+ (id)workSpaceCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
