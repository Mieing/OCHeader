@class NSString, NSArray;
@protocol AWEECOMIMChatListCellModelProtocol;

@interface AWEECOMIMChatListSectionModel : NSObject

@property (copy, nonatomic) NSString *sectionText;
@property (copy, nonatomic) NSString *sectionIcon;
@property (copy, nonatomic) NSString *sectionIconDark;
@property (nonatomic) BOOL hasMoveBeyond14daysModelToWithin;
@property (nonatomic) BOOL hasSectionHeader;
@property (nonatomic) unsigned long long sectionModelType;
@property (nonatomic) BOOL isfold;
@property (copy, nonatomic) NSString *sectionName;
@property (copy, nonatomic) NSArray<AWEECOMIMChatListCellModelProtocol> *cellModelList;

- (void).cxx_destruct;

@end
