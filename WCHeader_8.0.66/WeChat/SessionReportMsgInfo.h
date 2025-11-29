@class NSString;

@interface SessionReportMsgInfo : NSObject <PBCoding>

@property (nonatomic) long long msgid;
@property (nonatomic) unsigned int msgtime;
@property (nonatomic) int re_read;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_msgid;
+ (void)PBArrayAdd_msgtime;
+ (void)PBArrayAdd_re_read;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
