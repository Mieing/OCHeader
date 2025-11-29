@class NSString;

@interface RelaxFramework.ListItemCellInfo : NSObject {
    void /* function */ itemKey;
}

@property (nonatomic) int id;
@property (nonatomic, copy) NSString *itemKey;
@property (nonatomic) int index;
@property (nonatomic) int position;
@property (nonatomic) double left;
@property (nonatomic) double top;
@property (nonatomic) double right;
@property (nonatomic) double bottom;

- (id)initWithId:(int)a0 itemKey:(id)a1 index:(int)a2 position:(int)a3 left:(double)a4 top:(double)a5 right:(double)a6 bottom:(double)a7;
- (void).cxx_destruct;
- (id)init;

@end
