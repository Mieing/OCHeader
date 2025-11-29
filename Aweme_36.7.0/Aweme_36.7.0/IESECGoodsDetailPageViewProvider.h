@class IESECGoodsDetailSliceManager, NSString, NSDictionary, IESECGoodsDetailShowRequest, UIView, IESECGoodsDetailHeaderModel, IESECGoodsDetailPageContext;
@protocol IESECGoodsDetailHeadProtocol;

@interface IESECGoodsDetailPageViewProvider : NSObject

@property (retain, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) UIView<IESECGoodsDetailHeadProtocol> *headerContainerView;
@property (retain, nonatomic) IESECGoodsDetailHeaderModel *headerModel;
@property (copy, nonatomic) NSDictionary *headMoreVideo;
@property (nonatomic) long long currentContainerMode;
@property (retain, nonatomic) IESECGoodsDetailPageContext *pageContext;
@property (retain, nonatomic) IESECGoodsDetailSliceManager *sliceManager;
@property (retain, nonatomic) IESECGoodsDetailShowRequest *showReqeust;

- (id)initWithPageIdentifier:(id)a0;
- (void).cxx_destruct;

@end
