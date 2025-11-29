@class NSString;

@interface RelaxFramework.InputContentEventDetail : NSObject {
    void /* function */ value;
}

@property (nonatomic, copy) NSString *value;
@property (nonatomic) int cursor;

- (id)initWithValue:(id)a0 cursor:(int)a1;
- (void).cxx_destruct;
- (id)init;

@end
