@class NSString, AWEIMActionRecord;

@interface AWEIMOpenRedPacketAlertContext : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *schema;
@property (readonly, nonatomic) AWEIMActionRecord *record;
@property (readonly, copy, nonatomic) id /* block */ closeCallback;

- (id)initWithIdentifier:(id)a0 schema:(id)a1;
- (void)updateActionRecord:(id)a0;
- (void)updateCloseCallback:(id /* block */)a0;
- (void).cxx_destruct;

@end
