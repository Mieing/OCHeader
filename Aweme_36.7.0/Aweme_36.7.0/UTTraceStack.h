@class NSMutableArray;

@interface UTTraceStack : NSObject {
    NSMutableArray *mTraceStack;
}

@property int capacity;

+ (id)defaultInstance;

- (void)addTrace:(id)a0;
- (id)getTraceStack;
- (void).cxx_destruct;
- (id)init;

@end
