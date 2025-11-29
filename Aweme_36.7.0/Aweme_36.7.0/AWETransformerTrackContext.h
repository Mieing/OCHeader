@interface AWETransformerTrackContext : NSObject

@property (nonatomic) double rcvdDslTs;
@property (nonatomic) double rcvdDslMediaTs;
@property (nonatomic) double dslParsedCount;
@property (nonatomic) double elementTreeCreatedCount;
@property (nonatomic) double viewTreeCreatedCount;
@property (nonatomic) double transformerLayoutCount;
@property (nonatomic) double transformerUpdateLayoutCount;
@property (nonatomic) double transformerRenderTs;

@end
