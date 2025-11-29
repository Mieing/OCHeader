@class NSString;

@interface WCPayFaceHBItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *msg;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) long long svrID;
@property (nonatomic) unsigned int uniqueID;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *sendId;
@property (retain, nonatomic) NSString *nativeurl;
@property (nonatomic) unsigned long long money;
@property (retain, nonatomic) NSString *externMess;
@property (nonatomic) BOOL isLucky;
@property (retain) NSString *sendHeadImage;
@property (retain) NSString *sendNickName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_msg;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_svrID;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)parse;
- (void).cxx_destruct;

@end
