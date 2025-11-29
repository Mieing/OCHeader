@class BTRecommendAccountData, NSString;

@interface BTMissedSubsHeaderViewModel : BTBaseRecommendMsgCellViewModel

@property (retain, nonatomic) BTRecommendAccountData *accountData;
@property (readonly, nonatomic) NSString *descStr;
@property (readonly, nonatomic) BOOL isShowTimeMode;

- (id)itemViewClassName;
- (id)contact;
- (double)viewHeight;
- (void)updateCellHeight:(double)a0;
- (void).cxx_destruct;

@end
