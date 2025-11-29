@class NSIndexSet, NSArray;

@interface LSIMChatDetailMessageInsertState : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) NSIndexSet *indexSet;
@property (readonly, copy, nonatomic) NSArray *indexs;

- (id)initWithInsertType:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;

@end
