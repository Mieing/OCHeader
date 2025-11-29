@class NSArray;

@interface IESLiveMultiInteractList : NSObject

@property (copy, nonatomic) NSArray *users;
@property (copy, nonatomic) NSArray *linkedUsersArray;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) unsigned long long enterFrom;
@property (nonatomic) BOOL isFromWRDS;

+ (id)listWithLinkmicSyncData:(id)a0;

- (void).cxx_destruct;

@end
