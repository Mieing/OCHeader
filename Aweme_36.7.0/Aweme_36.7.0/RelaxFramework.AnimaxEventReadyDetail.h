@class NSString;

@interface RelaxFramework.AnimaxEventReadyDetail : NSObject {
    void /* function */ animationID;
    void /* function */ elementID;
}

@property (nonatomic, copy) NSString *animationID;
@property (nonatomic) double current;
@property (nonatomic) double total;
@property (nonatomic) int loopIndex;
@property (nonatomic, copy) NSString *elementID;

- (id)initWithAnimationID:(id)a0 current:(double)a1 total:(double)a2 loopIndex:(int)a3 elementID:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
