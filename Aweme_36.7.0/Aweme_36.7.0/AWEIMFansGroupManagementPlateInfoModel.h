@class NSString;

@interface AWEIMFansGroupManagementPlateInfoModel : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *plateHeaderViewTitle;
@property (copy, nonatomic) NSString *plateHeaderImageName;
@property (copy, nonatomic) NSString *plateFooterButtonTitle;
@property (nonatomic) BOOL moreMsg;
@property (nonatomic) BOOL hasUnreadMessages;
@property (nonatomic) BOOL shouldShowBusinessInfoEntry;

- (id)initWithPlateType:(long long)a0;
- (void)__setupModel;
- (void).cxx_destruct;

@end
