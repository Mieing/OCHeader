@class NSString, NSMutableArray, WCFinderContact;

@interface WCFinderSearchInfo : NSObject

@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) NSString *normalNickName;
@property (retain, nonatomic) NSMutableArray *nameHightkeywords;
@property (retain, nonatomic) NSString *normalSignature;
@property (retain, nonatomic) NSMutableArray *signatureHightkeywords;
@property (nonatomic) unsigned long long fansCount;
@property (nonatomic) unsigned long long friendFollowCount;
@property (retain, nonatomic) NSString *normalAuthProfession;
@property (retain, nonatomic) NSMutableArray *professionHightkeywords;

+ (id)finderSearchInfo:(id)a0;

- (void)processHighlightNickName:(id)a0;
- (void)processHighlightSignature:(id)a0;
- (void)processHighlightProfession:(id)a0;
- (void).cxx_destruct;

@end
