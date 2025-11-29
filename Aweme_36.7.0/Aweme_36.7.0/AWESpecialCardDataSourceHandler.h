@class NSString;

@interface AWESpecialCardDataSourceHandler : NSObject <AWESpecialCardDataSourceHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handleSpecialCard:(id)a0 currentDataSource:(id)a1 pullType:(long long)a2 awemeType:(long long)a3;
+ (id)enterFromForType:(long long)a0;
+ (id)markSpecialLocation:(id)a0 pullType:(long long)a1 awemeType:(long long)a2;
+ (id)filterInvalidModelForSpecialCardTemplate:(id)a0 awemeType:(long long)a1;
+ (id)filterCardForReversalIfNeed:(id)a0 currentDataSource:(id)a1 awemeType:(long long)a2;
+ (id)callSpecialCardDidInsert:(id)a0 currentDataSource:(id)a1 awemeType:(long long)a2;
+ (BOOL)canShowSpecialCardOfIndex:(long long)a0 model:(id)a1 cardName:(id)a2 awemeType:(long long)a3;


@end
