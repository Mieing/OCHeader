@interface WCFinderARCItem : NSObject

@property (nonatomic) unsigned long long listType;
@property (retain, nonatomic) id key;
@property (retain, nonatomic) id data;
@property (nonatomic) unsigned long long cost;

- (id)initWithData:(id)a0 cost:(unsigned long long)a1 forKey:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
