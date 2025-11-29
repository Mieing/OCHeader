@class NSNumber, DVEComplementaryFrameOperationGroup;
@protocol DVEComplementaryFrameContextProtocol;

@interface DVEComplementaryFrameViewModel : NSObject

@property (weak, nonatomic) id<DVEComplementaryFrameContextProtocol> context;
@property (copy, nonatomic) id /* block */ startBlock;
@property (nonatomic) double direction;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) DVEComplementaryFrameOperationGroup *group;
@property (retain, nonatomic) NSNumber *endComplementaryFrameTime;

+ (id)viewModelWithContext:(id)a0;

- (void).cxx_destruct;
- (void)clear;
- (id)initWithContext:(id)a0;
- (id)init;

@end
