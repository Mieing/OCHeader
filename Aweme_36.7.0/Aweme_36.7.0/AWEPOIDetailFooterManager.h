@class NSString, AWEPOIDetailNGPageContext, NSArray, NSMutableArray;

@interface AWEPOIDetailFooterManager : NSObject

@property (retain, nonatomic) NSMutableArray *cardList;
@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (readonly, copy, nonatomic) NSString *currentShowCardKey;
@property (readonly, copy, nonatomic) NSArray *registeredCardList;

- (void)registerFooterCard:(id)a0 priority:(long long)a1;
- (void)unRegisterFooterCard:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)sendNotification;

@end
