@class AWEIMChatListServiceModel, AWEIMChatListServiceExtraModel;

@interface AWEIMChatListModelActionModel : NSObject

@property (nonatomic) long long reason;
@property (retain, nonatomic) AWEIMChatListServiceModel *serviceModel;
@property (retain, nonatomic) AWEIMChatListServiceExtraModel *extra;

- (void).cxx_destruct;
- (id)init;

@end
