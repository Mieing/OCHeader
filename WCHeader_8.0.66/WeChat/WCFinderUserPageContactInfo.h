@class NSString, WCFinderContact;

@interface WCFinderUserPageContactInfo : NSObject

@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) BOOL isPrivateLock;
@property (retain, nonatomic) NSString *accountInfoUrl;

- (void).cxx_destruct;

@end
