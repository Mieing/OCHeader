@class NSMutableDictionary;

@interface TIMXECOMHandlerHolder : NSObject

@property (retain, nonatomic) NSMutableDictionary *rangeHandlers;
@property (retain, nonatomic) NSMutableDictionary *messageHandlers;

+ (id)sharedInstance;

- (id)getRangeHandlerWithInbox:(int)a0;
- (void)setRangeHandler:(id)a0 withInbox:(int)a1;
- (id)getMessagesHandlerWithInbox:(int)a0;
- (void)setMessagesHandler:(id)a0 withInbox:(int)a1;
- (void).cxx_destruct;

@end
