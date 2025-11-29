@class NSString;

@interface IESLiveGetMessageBoardDataDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *commentList;
@property (copy, nonatomic) NSString *selfCommentList;
@property (copy, nonatomic) NSString *uiConfig;
@property (copy, nonatomic) NSString *likeRelation;
@property (copy, nonatomic) NSString *dressInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
