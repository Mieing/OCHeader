@class NSMutableArray, CADisplayLink;

@interface PreloadMsgInfoGenerator : NSObject

@property (nonatomic) int direction;
@property (retain, nonatomic) CADisplayLink *preloadTimer;
@property (copy, nonatomic) id /* block */ mapBlock;
@property (copy, nonatomic) id /* block */ getBlock;
@property (retain, nonatomic) NSMutableArray *preloadMsgs;

+ (id)generatorWithDirection:(int)a0;

- (id)initWithDirection:(int)a0;
- (id)addMessageArray:(id)a0;
- (id /* block */)onMap;
- (id /* block */)onGet;
- (void)reset;
- (void)startTimer;
- (void)stopTimer;
- (void)doOnePreload;
- (void).cxx_destruct;

@end
