@class NSString;

@interface PendingMsgInfo : NSObject <PBCoding>

@property (nonatomic) int type;
@property (nonatomic) unsigned int msgLocalId;
@property (retain, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_msgLocalId;
+ (void)initialize;

@end
