@class NSString, NSDictionary;
@protocol AWEConcernRecentUpdateUnreadListPageHandlerProtocol;

@interface AWEConcernUpdateDetailVCInitModel : NSObject

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) unsigned long long enterFrom;
@property (weak, nonatomic) id<AWEConcernRecentUpdateUnreadListPageHandlerProtocol> pageHandler;
@property (copy, nonatomic) id /* block */ willDisappearBlock;

- (void).cxx_destruct;

@end
