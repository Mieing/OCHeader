@class NSString;

@interface RelaxFramework.AnimaxEventCommonDetail : NSObject {
    void /* function */ animationID;
}

@property (nonatomic, copy) NSString *animationID;
@property (nonatomic) double current;
@property (nonatomic) double total;
@property (nonatomic) int loopIndex;

- (id)initWithAnimationID:(id)a0 current:(double)a1 total:(double)a2 loopIndex:(int)a3;
- (void).cxx_destruct;
- (id)init;

@end
