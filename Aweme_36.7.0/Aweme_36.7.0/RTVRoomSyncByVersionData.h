@class NSString;
@protocol Optional;

@interface RTVRoomSyncByVersionData : JSONModel

@property (nonatomic) long long version;
@property (copy, nonatomic) NSString<Optional> *ext;

+ (id)keyMapper;

- (id)initWithVersion:(long long)a0 ext:(id)a1;
- (void).cxx_destruct;

@end
