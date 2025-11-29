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

- (void).cxx_destruct;
- (id)init;

@end
