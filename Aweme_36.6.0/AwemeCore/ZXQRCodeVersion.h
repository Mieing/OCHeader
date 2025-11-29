@class NSArray, ZXIntArray;

@interface ZXQRCodeVersion : NSObject

@property (readonly, nonatomic) int versionNumber;
@property (readonly, nonatomic) ZXIntArray *alignmentPatternCenters;
@property (readonly, nonatomic) NSArray *ecBlocks;
@property (readonly, nonatomic) int totalCodewords;
@property (readonly, nonatomic) int dimensionForVersion;

+ (id)versionForNumber:(int)a0;
+ (id)ZXQRCodeVersionWithVersionNumber:(int)a0 alignmentPatternCenters:(id)a1 ecBlocks1:(id)a2 ecBlocks2:(id)a3 ecBlocks3:(id)a4 ecBlocks4:(id)a5;
+ (id)provisionalVersionForDimension:(int)a0;
+ (id)decodeVersionInformation:(int)a0;
+ (void)initialize;

- (id)initWithVersionNumber:(int)a0 alignmentPatternCenters:(id)a1 ecBlocks1:(id)a2 ecBlocks2:(id)a3 ecBlocks3:(id)a4 ecBlocks4:(id)a5;
- (id)ecBlocksForLevel:(id)a0;
- (id)buildFunctionPattern;
- (void).cxx_destruct;
- (id)description;

@end
