@protocol IESECTabViewElementProtocol;

@interface IESECTabUpdateContext : NSObject

@property (nonatomic) BOOL isBatchUpdating;
@property (retain, nonatomic) id<IESECTabViewElementProtocol> selectedTabViewElement;

- (void).cxx_destruct;

@end
