@class NSArray, NSMutableArray;

@interface QWorldMapConfig : NSObject {
    NSArray *_originData;
}

@property (retain, nonatomic) NSMutableArray *sources;

+ (id)localSourceVersionForScene:(int)a0 isBingSource:(BOOL)a1;

- (id)initWithArray:(id)a0;
- (void)save:(BOOL)a0;
- (void).cxx_destruct;

@end
