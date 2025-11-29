@class NSString;

@interface RelaxFramework.ListInsertAction : NSObject {
    void /* function */ itemKey;
    void /* function */ reuseIdentifier;
}

@property (nonatomic, copy) NSString *itemKey;
@property (nonatomic) int position;
@property (nonatomic, copy) NSString *reuseIdentifier;
@property (nonatomic) int relaxFlags;
@property (nonatomic) double estimatedMainAxisSizePx;

- (id)initWithItemKey:(id)a0 position:(int)a1 reuseIdentifier:(id)a2 relaxFlags:(int)a3 estimatedMainAxisSizePx:(double)a4;
- (void).cxx_destruct;
- (id)init;

@end
