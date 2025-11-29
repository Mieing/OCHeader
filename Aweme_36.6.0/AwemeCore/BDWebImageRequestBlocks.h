@interface BDWebImageRequestBlocks : NSObject

@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completedBlock;
@property (copy, nonatomic) id /* block */ decryptBlock;

- (void).cxx_destruct;

@end
