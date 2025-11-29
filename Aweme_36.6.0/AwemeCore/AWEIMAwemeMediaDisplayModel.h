@class AWEIMMessage, AWEIMCodeGenFriendsAlbumMediaInfoModel;

@interface AWEIMAwemeMediaDisplayModel : NSObject <NSCoding>

@property (nonatomic) long long mediaType;
@property (weak, nonatomic) AWEIMMessage *message;
@property (nonatomic) BOOL isCombineMessage;
@property (retain, nonatomic) AWEIMCodeGenFriendsAlbumMediaInfoModel *friendsAlbumAsset;
@property (nonatomic) BOOL forbideDelete;

- (BOOL)isIMMedia;
- (BOOL)isIMFriendsAlbumMedia;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)contentType;

@end
