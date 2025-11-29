@class NSString, IESLiveVSFeedChainMatchModel, NSArray, IESLiveFeedDrawerViewControllerContext, HTSLiveRoom;

@interface IESLiveVSFeedChainCellModel : NSObject <IESLiveFeedDrawerItemProtocol>

@property (copy, nonatomic) NSString *ieslive_accessiblityName;
@property (readonly, nonatomic) Class cellClass;
@property (readonly, nonatomic) long long cellStyle;
@property (readonly, nonatomic) HTSLiveRoom *room;
@property (retain, nonatomic) IESLiveVSFeedChainMatchModel *matchModel;
@property (readonly, nonatomic) int cameraType;
@property (readonly, copy, nonatomic) NSString *cameraIdStr;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *desc;
@property (readonly, copy, nonatomic) NSArray *coverURLs;
@property (nonatomic) double titleHeight;
@property (readonly, copy, nonatomic) NSArray *labelURLs;
@property (readonly, copy, nonatomic) NSArray *officalLabelURLs;
@property (copy, nonatomic) NSString *drawerOfficalLabelText;
@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *context;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)initWithFeedItem:(id)a0;
- (void).cxx_destruct;
- (Class)sectionClass;

@end
