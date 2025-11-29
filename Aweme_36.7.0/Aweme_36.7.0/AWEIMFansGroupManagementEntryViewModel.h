@class NSString, AWEIMFansGroupManagementEntryModel;

@interface AWEIMFansGroupManagementEntryViewModel : NSObject

@property (copy, nonatomic) NSString *entryTitle;
@property (copy, nonatomic) NSString *entryIconName;
@property (nonatomic) double extraPadding;
@property (retain, nonatomic) AWEIMFansGroupManagementEntryModel *fansGroupManagementEntryModel;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
