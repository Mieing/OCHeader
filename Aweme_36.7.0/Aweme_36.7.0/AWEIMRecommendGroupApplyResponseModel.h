@class AWEIMRecommendGroupItem, NSString, AWEIMShareVerifyResponseModel, AWEIMChatModel;

@interface AWEIMRecommendGroupApplyResponseModel : NSObject

@property (retain, nonatomic) AWEIMShareVerifyResponseModel *groupVerifyResponseModel;
@property (retain, nonatomic) AWEIMChatModel *chatModel;
@property (retain, nonatomic) AWEIMRecommendGroupItem *recommendItem;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;

- (void).cxx_destruct;

@end
