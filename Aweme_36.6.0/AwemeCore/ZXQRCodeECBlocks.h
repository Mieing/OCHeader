@class NSArray;

@interface ZXQRCodeECBlocks : NSObject

@property (readonly, nonatomic) int ecCodewordsPerBlock;
@property (readonly, nonatomic) int numBlocks;
@property (readonly, nonatomic) int totalECCodewords;
@property (readonly, nonatomic) NSArray *ecBlocks;

+ (id)ecBlocksWithEcCodewordsPerBlock:(int)a0 ecBlocks:(id)a1;
+ (id)ecBlocksWithEcCodewordsPerBlock:(int)a0 ecBlocks1:(id)a1 ecBlocks2:(id)a2;

- (id)initWithEcCodewordsPerBlock:(int)a0 ecBlocks:(id)a1;
- (id)initWithEcCodewordsPerBlock:(int)a0 ecBlocks1:(id)a1 ecBlocks2:(id)a2;
- (void).cxx_destruct;

@end
