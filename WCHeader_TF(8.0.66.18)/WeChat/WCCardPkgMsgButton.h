@class NSString;

@interface WCCardPkgMsgButton : NSObject

@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *actionText;
@property (retain, nonatomic) NSString *actionUrl;

- (BOOL)IsActionValid;
- (void).cxx_destruct;

@end
