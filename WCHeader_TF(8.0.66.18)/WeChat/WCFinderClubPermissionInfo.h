@class NSString;

@interface WCFinderClubPermissionInfo : NSObject <PBCoding>

@property (nonatomic) BOOL shouldShowChatroomNewRedDot;
@property (nonatomic) BOOL shouldShowChatroomInfoNewRedDot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_shouldShowChatroomNewRedDot;
+ (void)PBArrayAdd_shouldShowChatroomInfoNewRedDot;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
