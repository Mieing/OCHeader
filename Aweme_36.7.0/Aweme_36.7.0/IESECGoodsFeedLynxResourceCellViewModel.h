@class NSString;

@interface IESECGoodsFeedLynxResourceCellViewModel : IESECGoodsFeedCellBaseViewModel

@property (copy, nonatomic) NSString *parentProductID;
@property (copy, nonatomic) NSString *lynxViewRequestID;
@property (nonatomic) long long loadStatus;
@property (copy, nonatomic) id /* block */ successComplete;

- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (struct CGSize { double x0; double x1; })calculateCellSizeForContaineSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithModel:(id)a0 context:(id)a1 useToInsert:(BOOL)a2;
- (void)resourceLynxViewModelWithModel:(id)a0;
- (id)lynxCardType;
- (id)clientLogExtra;
- (void)trackLynxCardLoad:(id)a0;
- (void).cxx_destruct;

@end
