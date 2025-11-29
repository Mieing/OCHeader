@class NSMutableArray;

@interface BypActionNotify : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *selector;
@property (retain, nonatomic) NSMutableArray *onlyNotifyMsgs;
@property (nonatomic) BOOL syncAllSelector;
@property (retain, nonatomic) NSMutableArray *syncItemList;

+ (void)initialize;

@end
