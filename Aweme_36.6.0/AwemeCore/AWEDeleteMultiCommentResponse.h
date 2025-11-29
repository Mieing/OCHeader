@class NSArray;

@interface AWEDeleteMultiCommentResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *deleteResult;
@property (retain, nonatomic) NSArray *blockResult;
@property (nonatomic) BOOL controlCommentCheck;

+ (id)deleteResultJSONTransformer;
+ (id)blockResultJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
