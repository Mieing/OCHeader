@class NSString;

@interface MMLiveTaskId : NSObject <MMLiveBeautyLogicProvider, NSCopying, MMLiveUniqueTaskId>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *anchorIdentityId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) BOOL isInitialAudience;
@property (readonly, nonatomic) BOOL isAnchor;
@property (readonly, nonatomic) BOOL isAudience;
@property (copy, nonatomic) NSString *exportId;
@property (nonatomic) BOOL isPrimitiveLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
