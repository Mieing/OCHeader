@class NSString, AWERLVirtualView, NSMutableArray;

@interface AWERLVirtualViewTreeSnapshotNode : NSObject

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) AWERLVirtualView *virtualView;
@property (retain, nonatomic) NSMutableArray *subNodes;

- (id)initWithVirtualView:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
