@class AWELuckyCatReadTaskSociaIMShareTaskInfo, NSString, AWELuckyCatReadTaskSocialCommentIncentiveTaskInfo, AWELuckyCatReadTaskSociaFeedFollowTaskInfo;

@interface AWELuckyCatReadTaskSocialInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELuckyCatReadTaskSociaFeedFollowTaskInfo *feedFollowTask;
@property (retain, nonatomic) AWELuckyCatReadTaskSocialCommentIncentiveTaskInfo *commentIncentiveTask;
@property (nonatomic) BOOL isCommentInspireStrategyA;
@property (retain, nonatomic) AWELuckyCatReadTaskSociaIMShareTaskInfo *imShareTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
