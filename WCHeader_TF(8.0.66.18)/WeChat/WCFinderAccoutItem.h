@class NSString, NSMutableArray, WCFinderContact;

@interface WCFinderAccoutItem : NSObject

@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) NSMutableArray *dataItems;
@property (copy, nonatomic) NSString *friendFollowCountText;

+ (id)itemWithAcctPageItem:(id)a0;

- (id)initWithAcctPageItem:(id)a0;
- (void).cxx_destruct;

@end
