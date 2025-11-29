@class NSArray, NSMutableArray, NSLock;

@interface DUXRadioboxGroup : NSObject {
    NSLock *_lock;
}

@property (retain, nonatomic) NSMutableArray *boxes;
@property (readonly, copy, nonatomic) NSArray *group;
@property long long currentIndex;
@property (copy, nonatomic) id /* block */ checkBlock;

- (void)addRadiobox:(id)a0;
- (id)initWithRadioboxes:(id)a0;
- (id)initWithCount:(unsigned long long)a0 style:(unsigned long long)a1 initialIndex:(unsigned long long)a2;
- (void)updateSelectRadiobox:(id)a0;
- (void)setSelectedRadiobox:(id)a0;
- (void)__addRadiobox:(id)a0;
- (void)removeRadiobox:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
