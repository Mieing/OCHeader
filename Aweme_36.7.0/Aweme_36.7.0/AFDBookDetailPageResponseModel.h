@class AFDBookUserCommentModel, AFDBookDetailPageLynxInfoModel, NSArray, AFDBookInfoDetailModel, AFDBookDetailModel, AFDBookDetailPageVideoListModel, AFDBookDetailPageTabsListResponse;

@interface AFDBookDetailPageResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AFDBookDetailModel *bookInfo;
@property (retain, nonatomic) AFDBookInfoDetailModel *bookDetail;
@property (retain, nonatomic) AFDBookDetailPageLynxInfoModel *headerInfo;
@property (retain, nonatomic) NSArray *lynxTabsInfo;
@property (retain, nonatomic) AFDBookDetailPageVideoListModel *videoTabInfo;
@property (retain, nonatomic) AFDBookDetailPageTabsListResponse *tabsList;
@property (retain, nonatomic) AFDBookUserCommentModel *userComment;

+ (id)bookInfoJSONTransformer;
+ (id)bookDetailJSONTransformer;
+ (id)headerInfoJSONTransformer;
+ (id)lynxTabsInfoJSONTransformer;
+ (id)videoTabInfoJSONTransformer;
+ (id)tabsListJSONTransformer;
+ (id)userCommentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
