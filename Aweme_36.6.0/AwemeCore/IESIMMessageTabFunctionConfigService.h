@class NSString;

@interface IESIMMessageTabFunctionConfigService : HTSService <IESIMMessageTabFunctionConfigService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)messageTabSkeletonBottomInset;
- (BOOL)enableStrangeBottomTips;
- (id)naviBarTitleOfChatListVC;

@end
