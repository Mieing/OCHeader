@interface BUCacheAction : NSObject

@property (nonatomic) unsigned long long actionType;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)initWithActionType:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
