@class ABRVideoResolution;

@interface BRTable : NSObject

@property (retain, nonatomic) ABRVideoResolution *level1;
@property (retain, nonatomic) ABRVideoResolution *level2;
@property (retain, nonatomic) ABRVideoResolution *level3;
@property (retain, nonatomic) ABRVideoResolution *level4;
@property (retain, nonatomic) ABRVideoResolution *level5;
@property (retain, nonatomic) ABRVideoResolution *level6;

- (id)getLevel:(int)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
