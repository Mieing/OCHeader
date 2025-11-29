@class NSString, AWENearbyPageContext, AWEAwemeModel;

@interface AWENearbyCardLiveCellModel : NSObject <AWECommonFeedCellModelProtocol, AWENearbyCardFeedCellModelProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;

- (id)diffIdentifierKey;
- (struct CGSize { double x0; double x1; })cellSizeWithConstraintWidth:(double)a0;
- (void)configWithSectionData:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
