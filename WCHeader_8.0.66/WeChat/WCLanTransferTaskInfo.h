@class NSString, CMessageWrap;

@interface WCLanTransferTaskInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *lanClientMsgID;
@property (copy, nonatomic) NSString *toUser;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *lanInfo;
@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_lanClientMsgID;
+ (void)PBArrayAdd_toUser;
+ (void)PBArrayAdd_filePath;
+ (void)PBArrayAdd_lanInfo;
+ (void)PBArrayAdd_fileSize;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
