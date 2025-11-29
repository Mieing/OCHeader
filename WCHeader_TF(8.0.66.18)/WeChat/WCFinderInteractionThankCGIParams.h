@class NSString, FinderShareUserInfo;

@interface WCFinderInteractionThankCGIParams : NSObject

@property (nonatomic) int interactionType;
@property (nonatomic) int thankScene;
@property (nonatomic) unsigned long long mentionID;
@property (copy, nonatomic) NSString *feedTid;
@property (retain, nonatomic) FinderShareUserInfo *shareUserInfo;

- (void).cxx_destruct;

@end
