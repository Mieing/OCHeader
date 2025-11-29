@class DVEComplementaryFrameOperation;

@interface DVEComplementaryFrameOperationGroup : NSObject

@property (retain, nonatomic) DVEComplementaryFrameOperation *headOperation;
@property (retain, nonatomic) DVEComplementaryFrameOperation *tailOperation;

- (void).cxx_destruct;

@end
