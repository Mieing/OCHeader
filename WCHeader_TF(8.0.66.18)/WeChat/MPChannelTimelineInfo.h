@class NSString, NSArray;

@interface MPChannelTimelineInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL shouldCleanUpDesc;
@property (retain, nonatomic) NSArray *bizInfoArr;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) unsigned long long appDebugModeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_shouldCleanUpDesc;
+ (void)PBArrayAdd_bizInfoArr;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_appDebugModeType;
+ (void)initialize;

@end
