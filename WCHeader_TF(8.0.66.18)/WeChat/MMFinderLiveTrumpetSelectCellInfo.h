@class NSString, NSNumber;

@interface MMFinderLiveTrumpetSelectCellInfo : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *headerImageURL;
@property (retain, nonatomic) NSNumber *accountType;
@property (retain, nonatomic) NSNumber *privacyType;
@property (retain, nonatomic) NSNumber *selectedAccountType;
@property (retain, nonatomic) NSNumber *selectedPrivacyType;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL isAccount;
@property (readonly, nonatomic) BOOL isCreation;
@property (readonly, nonatomic) BOOL isPrivacy;

- (void).cxx_destruct;

@end
