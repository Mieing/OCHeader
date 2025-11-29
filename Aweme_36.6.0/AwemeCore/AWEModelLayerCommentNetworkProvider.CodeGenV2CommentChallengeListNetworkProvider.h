@class NSNumber, NSString;

@interface AWEModelLayerCommentNetworkProvider.CodeGenV2CommentChallengeListNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ keyWord;
    void /* function */ extra;
}

@property (nonatomic, retain) NSNumber *serviceId;
@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, retain) NSNumber *groupId;
@property (nonatomic, copy) NSString *keyWord;
@property (nonatomic, copy) NSString *extra;
@property (nonatomic, retain) NSNumber *maxCount;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
