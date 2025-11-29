@class NSString;

@interface IESLiveRoomDataSyncModel : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *subkey;
@property (nonatomic) long long version;
@property (retain, nonatomic) id value;

- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
