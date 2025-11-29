@class NSMutableArray;

@interface CSSRuleList : NSObject

@property (retain, nonatomic) NSMutableArray *internalArray;
@property (readonly, nonatomic) unsigned long long length;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)item:(unsigned long long)a0;

@end
