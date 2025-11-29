@class AWEIMRecommendGroupApplyResponseModel, NSString, AWEIMRecommendGroupApplyUIModel;

@interface AWEIMRecommendGroupApplyViewModel : NSObject

@property (retain, nonatomic) AWEIMRecommendGroupApplyResponseModel *model;
@property (retain, nonatomic) AWEIMRecommendGroupApplyUIModel *uiModel;
@property (copy, nonatomic) NSString *toast;

- (id)convertStatusCodeToUIModel:(unsigned long long)a0;
- (void)removeSchoolGroupWithChatModel:(id)a0;
- (BOOL)canSendMessage;
- (id)handleEnterSchoolGroupEvent;
- (id)enterSchoolGroup;
- (id)applyJoinSDKSchoolGroup;
- (id)updateSchoolGroupStatus:(long long)a0 chatModel:(id)a1;
- (id)applyJoinSchoolGroup;
- (void).cxx_destruct;
- (id)init;

@end
