@class NSString, WCFinderContact;

@interface WCFinderQCCodeNameCardViewModel : NSObject <WCFinderContactExt>

@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) WCFinderContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
