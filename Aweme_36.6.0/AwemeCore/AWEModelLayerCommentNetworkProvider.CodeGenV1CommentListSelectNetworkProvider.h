@class NSString, NSNumber;

@interface AWEModelLayerCommentNetworkProvider.CodeGenV1CommentListSelectNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ awemeId;
    void /* function */ commentSelectOptions;
    void /* function */ keyword;
    void /* function */ opinionId;
}

@property (nonatomic, copy) NSString *awemeId;
@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, copy) NSString *commentSelectOptions;
@property (nonatomic, copy) NSString *keyword;
@property (nonatomic, retain) NSNumber *sortOptions;
@property (nonatomic, copy) NSString *opinionId;
@property (nonatomic, retain) NSNumber *channelId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
