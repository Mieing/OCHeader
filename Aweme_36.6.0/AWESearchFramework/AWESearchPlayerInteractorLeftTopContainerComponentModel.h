@class NSArray, AWESearchPaidTagComponentModel, AWESearchCustomTagComponentModel, AWESearchCoverTagComponentModel;

@interface AWESearchPlayerInteractorLeftTopContainerComponentModel : AWESearchComponentBasicModel

@property (retain, nonatomic) NSArray *type;
@property (nonatomic) unsigned long long componentType;
@property (retain, nonatomic) AWESearchCustomTagComponentModel *customTagModel;
@property (retain, nonatomic) AWESearchCoverTagComponentModel *coverTagModel;
@property (retain, nonatomic) AWESearchPaidTagComponentModel *paidTagModel;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
