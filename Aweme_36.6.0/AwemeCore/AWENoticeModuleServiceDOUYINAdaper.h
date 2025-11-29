@class NSString;

@interface AWENoticeModuleServiceDOUYINAdaper : NSObject <AWENoticeModuleServiceCommonAdaper, AWENoticeModuleServiceDOUYINAdaper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFlame;
+ (Class)weakTargetClass;

- (BOOL)enableFlame;
- (BOOL)shouldForceShowFollowBtnWithStatus:(long long)a0 noticeType:(id)a1;
- (long long)defaultVajraOtherGroup;
- (long long)defaultVajraCommentGroup;
- (long long)defaultVajraAtGroup;
- (long long)defaultVajraDiggGroup;
- (long long)defaultVajraFansGroup;
- (long long)defaultNewFansGroup;
- (long long)defaultFITInteractiveHighFansType;
- (long long)defaultFITInteractiveNormalType;
- (long long)defaultInteractiveType;
- (id)weakTarget;

@end
