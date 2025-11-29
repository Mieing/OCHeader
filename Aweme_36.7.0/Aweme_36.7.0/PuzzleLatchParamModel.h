@class NSString, NSDictionary, UIView;
@protocol IESLiveHybridContainerProtocol;

@interface PuzzleLatchParamModel : NSObject

@property (weak, nonatomic) UIView<IESLiveHybridContainerProtocol> *realContainer;
@property (copy, nonatomic) NSString *latchID;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (copy, nonatomic) NSDictionary *initialProps;

- (void).cxx_destruct;

@end
