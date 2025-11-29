@class NSString;

@interface RelaxFramework.InputSelectionChangeEventDetail : NSObject {
    void /* function */ direction;
}

@property (nonatomic) int start;
@property (nonatomic) int end;
@property (nonatomic, copy) NSString *direction;

- (id)initWithStart:(int)a0 end:(int)a1 direction:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
