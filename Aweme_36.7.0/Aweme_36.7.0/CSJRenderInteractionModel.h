@class CSJRenderClickEventModel, NSDictionary;

@interface CSJRenderInteractionModel : NSObject

@property (nonatomic) long long renderInteractionType;
@property (retain, nonatomic) CSJRenderClickEventModel *renderClickEventModel;
@property (copy, nonatomic) NSDictionary *js2NativeParams;
@property (copy, nonatomic) NSDictionary *native2JSParams;

- (void).cxx_destruct;

@end
