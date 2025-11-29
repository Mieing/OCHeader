@class NSString;

@interface RelaxFramework.AnimaxEventCommonDetail : NSObject {
    void /* function */ animationID;
}

@property (nonatomic, copy) NSString *animationID;
@property (nonatomic) double current;
@property (nonatomic) double total;
@property (nonatomic) int loopIndex;

- (void).cxx_destruct;
- (id)init;

@end
