@class UILabel, IESLiveImageView, NSString;

@interface IESLiveMatchSpliceShareBottomView : UIView <IESLiveVSSharePosterViewProtocol>

@property (retain, nonatomic) IESLiveImageView *saveIconImageView;
@property (retain, nonatomic) UILabel *saveDescribeLabel;
@property (retain, nonatomic) IESLiveImageView *scanIconImageView;
@property (retain, nonatomic) UILabel *scanDescribeLabel;
@property (copy, nonatomic) id /* block */ downLoadCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
