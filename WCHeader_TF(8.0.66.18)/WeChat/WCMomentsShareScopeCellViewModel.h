@class CContact, ContactTagData;

@interface WCMomentsShareScopeCellViewModel : NSObject

@property (nonatomic) long long cellType;
@property (retain, nonatomic) CContact *contactData;
@property (retain, nonatomic) ContactTagData *tagData;
@property (nonatomic) BOOL isFilterTagDataEnabled;
@property (nonatomic) BOOL shouldRoundTopCorner;
@property (nonatomic) BOOL shouldRoundBottomCorner;
@property (nonatomic) BOOL shouldDisplayBottomLine;

+ (id)sectionIdentifierOfType:(long long)a0;
+ (long long)viewTypeOfSectionIdentifier:(id)a0;

- (id)initWithUsername:(id)a0;
- (id)initWithTagId:(unsigned int)a0 isFilterTagDataEnabled:(BOOL)a1;
- (id)initAsLoadMoreCellVM;
- (void)_initContactDataFromUsername:(id)a0;
- (void)_initTagDataFromTagId:(unsigned int)a0;
- (void).cxx_destruct;

@end
