@interface TVLOptionInternal : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) long long key;

+ (id)optionWithKey:(long long)a0 type:(unsigned long long)a1;

@end
