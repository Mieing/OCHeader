@class NSString;

@interface IESLiveUGCVideoHeaderDiffableModel : IESLiveUGCVideoDiffableModel

@property (copy, nonatomic) NSString *leftLabelText;
@property (copy, nonatomic) NSString *rightLabelText;
@property (copy, nonatomic) id /* block */ changeButtonBlock;
@property (copy, nonatomic) NSString *changeTitle;
@property (nonatomic) BOOL changeButtonShow;

- (void).cxx_destruct;

@end
