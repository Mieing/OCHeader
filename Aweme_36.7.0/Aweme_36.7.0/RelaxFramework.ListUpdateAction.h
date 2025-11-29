@class NSString;

@interface RelaxFramework.ListUpdateAction : NSObject {
    void /* function */ itemKey;
    void /* function */ reuseIdentifier;
}

@property (nonatomic, copy) NSString *itemKey;
@property (nonatomic) int from;
@property (nonatomic) int to;
@property (nonatomic, copy) NSString *reuseIdentifier;
@property (nonatomic) int relaxFlags;
@property (nonatomic) double estimatedMainAxisSizePx;

- (id)initWithItemKey:(id)a0 from:(int)a1 to:(int)a2 reuseIdentifier:(id)a3 relaxFlags:(int)a4 estimatedMainAxisSizePx:(double)a5;
- (void).cxx_destruct;
- (id)init;

@end
