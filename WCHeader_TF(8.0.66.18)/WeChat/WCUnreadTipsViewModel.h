@class NSMutableArray;

@interface WCUnreadTipsViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *userNames;
@property (retain, nonatomic) NSMutableArray *feedIds;

- (id)initWithUnreadLayer:(id)a0;
- (void)fetchUserName:(id /* block */)a0;
- (void).cxx_destruct;

@end
