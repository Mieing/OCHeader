@class NSString, WCFinderContact, WCFinderMessageShareNameCard;

@interface WCFinderLimitedCheckParamsModel : NSObject

@property (copy, nonatomic) NSString *feedId;
@property (nonatomic) unsigned long long shareScene;
@property (retain, nonatomic) WCFinderMessageShareNameCard *nameCard;
@property (nonatomic) BOOL isChatRoom;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) int entryScene;
@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) int commentScene;
@property (nonatomic) BOOL isLive;

- (void).cxx_destruct;

@end
