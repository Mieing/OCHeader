@interface YYSentinel : NSObject {
    int _value;
}

@property (readonly) int value;

- (int)increase;

@end
