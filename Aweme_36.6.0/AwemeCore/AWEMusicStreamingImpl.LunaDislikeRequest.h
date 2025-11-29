@class NSArray, NSString;

@interface AWEMusicStreamingImpl.LunaDislikeRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ authorIDs;
    void /* function */ itemID;
}

@property (nonatomic) unsigned long long itemType;
@property (nonatomic, copy) NSArray *authorIDs;
@property (nonatomic, copy) NSString *itemID;
@property (nonatomic) long long actionType;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
