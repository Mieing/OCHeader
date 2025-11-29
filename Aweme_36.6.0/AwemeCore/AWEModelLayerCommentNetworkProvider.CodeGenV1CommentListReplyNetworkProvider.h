@class NSString, NSNumber;

@interface AWEModelLayerCommentNetworkProvider.CodeGenV1CommentListReplyNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ commentId;
    void /* function */ itemId;
    void /* function */ topIds;
    void /* function */ insertIds;
    void /* function */ city;
    void /* function */ topQueryWord;
    void /* function */ needPersonalRecommend;
    void /* function */ hotspotId;
    void /* function */ adInfo;
    void /* function */ viewedComments;
    void /* function */ commentCommonAwemeData;
    void /* function */ commentCommonUserData;
    void /* function */ commentCommonCommentData;
    void /* function */ commentToken;
    void /* function */ channelExt;
    void /* function */ addressBookAccess;
    void /* function */ mediumShrink;
    void /* function */ authenticationToken;
    void /* function */ hostAbi;
    void /* function */ language;
    void /* function */ commonFlags;
    void /* function */ commonData;
}

@property (nonatomic, copy) NSString *commentId;
@property (nonatomic, copy) NSString *itemId;
@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, copy) NSString *topIds;
@property (nonatomic, copy) NSString *insertIds;
@property (nonatomic, retain) NSNumber *channelId;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, retain) NSNumber *followerCount;
@property (nonatomic, retain) NSNumber *isFamiliar;
@property (nonatomic, retain) NSNumber *itemType;
@property (nonatomic, copy) NSString *topQueryWord;
@property (nonatomic, copy) NSString *needPersonalRecommend;
@property (nonatomic, retain) NSNumber *serviceId;
@property (nonatomic, retain) NSNumber *groupId;
@property (nonatomic, retain) NSNumber *commentScene;
@property (nonatomic, copy) NSString *hotspotId;
@property (nonatomic, copy) NSString *adInfo;
@property (nonatomic, retain) NSNumber *useUrlOptimize;
@property (nonatomic, copy) NSString *viewedComments;
@property (nonatomic, retain) NSNumber *useLightOptimize;
@property (nonatomic, copy) NSString *commentCommonAwemeData;
@property (nonatomic, copy) NSString *commentCommonUserData;
@property (nonatomic, copy) NSString *commentCommonCommentData;
@property (nonatomic, copy) NSString *commentToken;
@property (nonatomic, retain) NSNumber *friendInteraction;
@property (nonatomic, copy) NSString *channelExt;
@property (nonatomic, retain) NSNumber *hotsoonFilteredCount;
@property (nonatomic, copy) NSString *addressBookAccess;
@property (nonatomic, retain) NSNumber *commentLevel;
@property (nonatomic, copy) NSString *mediumShrink;
@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, copy) NSString *hostAbi;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *commonFlags;
@property (nonatomic, copy) NSString *commonData;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initWithItemId:(id)a0 commentId:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
