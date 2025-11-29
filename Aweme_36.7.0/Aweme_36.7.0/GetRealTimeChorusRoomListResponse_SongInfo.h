@class NSString;

@interface GetRealTimeChorusRoomListResponse_SongInfo : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *coverURL;

+ (id)descriptor;

@end
