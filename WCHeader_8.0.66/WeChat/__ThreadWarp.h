@interface __ThreadWarp : NSObject

@property (retain, nonatomic) id m_target;
@property (nonatomic) SEL m_sel;
@property (retain, nonatomic) id m_arg;

- (id)init;
- (void)dealloc;
- (void)Run;

@end
