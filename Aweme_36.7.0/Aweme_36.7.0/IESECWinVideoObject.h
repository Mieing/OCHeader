@class NSString, IESECURLModel, IESECWinVideoModel;

@interface IESECWinVideoObject : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol>

@property (retain, nonatomic) IESECURLModel *cover;
@property (copy, nonatomic) NSString *durationText;
@property (retain, nonatomic) IESECURLModel *subIcon;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *jumpUrl;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) IESECWinVideoModel *video;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (nonatomic) double cellHeight;
@property (nonatomic) double contentWidth;
@property (nonatomic) unsigned long long tabType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (double)calculateCellHeight;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (void).cxx_destruct;

@end
