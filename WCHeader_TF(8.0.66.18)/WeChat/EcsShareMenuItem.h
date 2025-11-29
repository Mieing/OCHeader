@class NSDictionary;

@interface EcsShareMenuItem : NSObject

@property (nonatomic) unsigned long long menuItem;
@property (retain, nonatomic) NSDictionary *customParam;
@property (nonatomic) BOOL disable;

+ (id)createLocalItemArray:(id)a0;
+ (id)createFromCustom:(id)a0 afterToCustom:(id)a1;
+ (id)createLocalItem:(id)a0;

- (id)initWithMenuItem:(unsigned long long)a0;
- (id)getId;
- (void).cxx_destruct;

@end
