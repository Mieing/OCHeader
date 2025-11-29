@class RTVVoipModel, RTVVoipViewControllerContext;

@interface RTVVoipViewControllerItem : NSObject

@property (retain, nonatomic) RTVVoipModel *voip;
@property (retain, nonatomic) RTVVoipViewControllerContext *context;
@property (nonatomic) BOOL inPrepare;

- (id)initWithVoipModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
