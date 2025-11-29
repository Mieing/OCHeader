@class WCFinderContact;

@interface WCFinderAdContactCache : NSObject

@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) unsigned long long refreshTime;

- (void).cxx_destruct;

@end
