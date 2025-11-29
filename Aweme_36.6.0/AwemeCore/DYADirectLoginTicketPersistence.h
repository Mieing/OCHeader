@class NSMutableDictionary, AWEStorage;

@interface DYADirectLoginTicketPersistence : NSObject

@property (retain, nonatomic) NSMutableDictionary *ticketDict;
@property (readonly, nonatomic) AWEStorage *storage;

+ (id)sharedInstance;

- (id)loadTicketDict;
- (void)saveTicketDict;
- (void)setTicket:(id)a0 withSecUserID:(id)a1;
- (id)ticketWithSecUserID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
