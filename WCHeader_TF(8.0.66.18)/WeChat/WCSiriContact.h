@class NSString, NSArray;

@interface WCSiriContact : NSObject <PBCoding>

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *avatarUrl;
@property (retain, nonatomic) NSString *avatarHDUrl;
@property (readonly, nonatomic) BOOL isChatRoom;
@property (retain, nonatomic) NSArray *memberAvatarUrls;
@property (retain, nonatomic) NSString *termName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_displayName;
+ (void)PBArrayAdd_avatarUrl;
+ (void)PBArrayAdd_avatarHDUrl;
+ (void)PBArrayAdd_memberAvatarUrls;
+ (void)PBArrayAdd_termName;
+ (void)initialize;

@end
