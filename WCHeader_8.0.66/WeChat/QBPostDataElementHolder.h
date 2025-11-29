@class NSMutableArray;

@interface QBPostDataElementHolder : NSObject {
    NSMutableArray *_array;
}

+ (id)defaulInstance;

- (id)init;
- (void)addElement:(id)a0;
- (void)removeElement:(id)a0;
- (void).cxx_destruct;

@end
