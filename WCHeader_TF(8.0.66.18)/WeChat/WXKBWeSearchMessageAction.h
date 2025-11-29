@class NSDictionary;

@interface WXKBWeSearchMessageAction : WXKBMessageAction

@property (retain, nonatomic) NSDictionary *dataItem;

- (id)initWithDictionary:(id)a0;
- (void)privatePerform;
- (id)message;
- (id)finderProfileMessage;
- (id)brandProfileMessage;
- (BOOL)openWithMessage:(id)a0;
- (BOOL)openBrandProfileWithMessage:(id)a0 chatContact:(id)a1;
- (void)report;
- (void).cxx_destruct;

@end
