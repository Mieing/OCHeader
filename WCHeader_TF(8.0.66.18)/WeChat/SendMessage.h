@class NSString;

@interface SendMessage : NSObject <PBCoding>

@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int msgLocalId;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int imageStatus;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *msgSource;
@property (nonatomic) BOOL needCheckEasterEgg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_msgLocalId;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_imageStatus;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_message;
+ (void)PBArrayAdd_msgSource;
+ (void)PBArrayAdd_needCheckEasterEgg;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
