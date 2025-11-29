@class IESECGoodsFeedContext, NSString;
@protocol IESECVideoInnerFlowListActionDelegate;

@interface IESECVideoInnerFeedTopCellViewModel : NSObject <IESECContentListCellViewModelProtocol>

@property (weak, nonatomic) id<IESECVideoInnerFlowListActionDelegate> actionDelegate;
@property (retain, nonatomic) IESECGoodsFeedContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })cellContentSize;
- (id)configureCellWithTableView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })topViewImageFrame;
- (void).cxx_destruct;
- (unsigned long long)cellType;

@end
