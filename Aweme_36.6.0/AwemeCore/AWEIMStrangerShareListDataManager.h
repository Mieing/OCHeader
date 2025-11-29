@class NSArray;

@interface AWEIMStrangerShareListDataManager : NSObject

@property (nonatomic) BOOL isRequstOnAir;
@property (copy, nonatomic) NSArray *users;

+ (id)sharedInstance;

- (void)fetchStrangerShareList:(id /* block */)a0;
- (void).cxx_destruct;

@end
