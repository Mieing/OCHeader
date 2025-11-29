@interface WCFinderLongPressModel : NSObject

@property (nonatomic) unsigned long long menuItemType;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (copy, nonatomic) id /* block */ handle;
@property (retain, nonatomic) id userInfo;

+ (id)menuItem:(unsigned long long)a0 handle:(id /* block */)a1;

- (id)initWithType:(unsigned long long)a0 target:(id)a1 selector:(SEL)a2;
- (void).cxx_destruct;

@end
