@class NSString, CContact, WCFinderContact;

@interface WCFinderContactNameHeadInfo : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *headUrl;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) WCFinderContact *finderContact;

+ (id)infoWithWchatContact:(id)a0;
+ (id)infoWithFinderContact:(id)a0;

- (void).cxx_destruct;

@end
