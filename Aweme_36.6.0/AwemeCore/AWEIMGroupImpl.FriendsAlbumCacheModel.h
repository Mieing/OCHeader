@class NSString, NSNumber, AWEIMCodeGenFriendsAlbumMediaInfoModel;

@interface AWEIMGroupImpl.FriendsAlbumCacheModel : AWEBaseDataModel <IESIMFriendsAlbumCacheModelProtocol> {
    void /* function */ identifier;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSNumber *hasDeleted;
@property (nonatomic, retain) AWEIMCodeGenFriendsAlbumMediaInfoModel *assetModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
