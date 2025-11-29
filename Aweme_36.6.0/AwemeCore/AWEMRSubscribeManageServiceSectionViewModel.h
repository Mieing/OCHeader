@class NSMutableSet;

@interface AWEMRSubscribeManageServiceSectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) NSMutableSet *trackCellShowSet;
@property (nonatomic) long long type;

- (void)trackCellClickWithModel:(id)a0;
- (void)trackCellShowWithModel:(id)a0;
- (void).cxx_destruct;

@end
