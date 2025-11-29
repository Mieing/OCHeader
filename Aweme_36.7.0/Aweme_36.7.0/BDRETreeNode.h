@class NSArray, BDRECommand;

@interface BDRETreeNode : NSObject

@property (readonly, nonatomic) BDRECommand *command;
@property (readonly, nonatomic) NSArray *children;

- (id)initWithCommand:(id)a0 children:(id)a1;
- (void).cxx_destruct;

@end
