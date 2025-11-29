@class NSString;

@interface WCCardPkgMsgAcceptItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *cardExt;
@property (nonatomic) unsigned int endTime;
@property (nonatomic) unsigned int actionType;

- (BOOL)IsAcceptItemValid;
- (void).cxx_destruct;

@end
