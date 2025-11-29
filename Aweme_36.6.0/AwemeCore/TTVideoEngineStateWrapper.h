@class TTVideoEngine;

@interface TTVideoEngineStateWrapper : NSObject

@property (weak, nonatomic) TTVideoEngine *videoEngine;
@property (nonatomic) BOOL hasSet;

- (void).cxx_destruct;
- (id)initWithEngine:(id)a0;

@end
