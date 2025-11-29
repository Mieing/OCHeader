@class NSString, WCCardDataCardInfo;

@interface WCShareCardJumpToFinderViewData : NSObject

@property (retain, nonatomic) WCCardDataCardInfo *cardInfo;
@property (retain, nonatomic) NSString *feedId;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSString *leftIconUrl;
@property (retain, nonatomic) NSString *rightIconUrl;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *title;

- (void).cxx_destruct;

@end
