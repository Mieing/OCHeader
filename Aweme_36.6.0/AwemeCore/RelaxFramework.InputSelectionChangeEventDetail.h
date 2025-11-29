@class NSString;

@interface RelaxFramework.InputSelectionChangeEventDetail : NSObject {
    void /* function */ direction;
}

@property (nonatomic) int start;
@property (nonatomic) int end;
@property (nonatomic, copy) NSString *direction;

- (void).cxx_destruct;
- (id)init;

@end
