@class NSMutableArray;

@interface QQDataArray : NSObject <NSSecureCoding> {
    NSMutableArray *_dataArray;
}

+ (id)arrayWithObjectArray:(id)a0;
+ (BOOL)supportsSecureCoding;

- (id)objectArrayWithClass:(Class)a0;
- (id)initWithObjectArray:(id)a0;
- (BOOL)replaceObjectAtIndex:(int)a0 withObject:(id)a1;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeAllObjects;
- (BOOL)removeObjectAtIndex:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)count;

@end
