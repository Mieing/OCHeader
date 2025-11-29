@class SearchBrandContactShare, SearchFinderFeedsShare, BaseResponse, SearchLiteAppShare, SearchWeappFeedsShare, GetSearchShareResponse_SearchShareContext, SearchEmoticonShare, SearchBrandFeedsShare, SearchWeappShare, SearchFinderAccountShare;

@interface GetSearchShareResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) GetSearchShareResponse_SearchShareContext *context;
@property (retain, nonatomic) SearchBrandFeedsShare *brandFeed;
@property (retain, nonatomic) SearchBrandContactShare *brandProfile;
@property (retain, nonatomic) SearchWeappFeedsShare *weappFeed;
@property (retain, nonatomic) SearchWeappShare *weappProfile;
@property (retain, nonatomic) SearchFinderAccountShare *finderProfile;
@property (retain, nonatomic) SearchFinderFeedsShare *finderFeed;
@property (retain, nonatomic) SearchEmoticonShare *emoticon;
@property (retain, nonatomic) SearchLiteAppShare *liteApp;

+ (void)initialize;

@end
