@class NSString;
@protocol AEKElementDiffableNode;

@interface AEKElementDiffableNode : NSObject <AEKElementDiffableNode>

@property (retain, nonatomic) id<AEKElementDiffableNode> diffNode;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long updateID;
@property (readonly, nonatomic) id data;
@property (readonly, nonatomic) BOOL isEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffChangesWithOrigin:(id)a0;
- (id)initWithElementDiffNode:(id)a0;
- (void).cxx_destruct;

@end
