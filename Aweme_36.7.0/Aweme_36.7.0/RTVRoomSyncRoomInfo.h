@class NSString;
@protocol Optional;

@interface RTVRoomSyncRoomInfo : JSONModel

@property (nonatomic) long long roomInfoType;
@property (copy, nonatomic) NSString<Optional> *ext;

+ (id)keyMapper;

- (id)initWithRoomInfoType:(long long)a0 ext:(id)a1;
- (void).cxx_destruct;

@end
