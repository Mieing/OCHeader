@class NSArray, NSNumber;

@interface GCLayoutConfig : NSObject

@property (nonatomic) double outTotalHeight;
@property (nonatomic) double outMaxWidth;
@property (nonatomic) int numLine;
@property (retain, nonatomic) NSArray *subViewArray;
@property (nonatomic) double space;
@property (retain, nonatomic) NSArray *spaceArray;
@property (nonatomic) double maxRight;
@property (nonatomic) double lineSpace;
@property (nonatomic) double verticalFixeRight;
@property (nonatomic) NSNumber *verticalAlignTop;
@property (nonatomic) double maxWidth;
@property (nonatomic) double firstViewLeft;
@property (nonatomic) double centerY;
@property (nonatomic) unsigned long long alignStrategy;

+ (id)layoutConfigWithSubviewArray:(id)a0 space:(double)a1 maxRight:(double)a2 lineSpace:(double)a3 alignStrategy:(unsigned long long)a4;
+ (id)layoutConfigWithSubviewArray:(id)a0 space:(double)a1 maxRight:(double)a2;

- (void).cxx_destruct;

@end
