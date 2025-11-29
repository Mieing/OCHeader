@class NSString;

@interface WCPayPluginTopMsgItem : NSObject <PBCoding>

@property (nonatomic) long long msgSvrId;
@property (retain, nonatomic) NSString *msgContent;
@property (nonatomic) unsigned int msgCreateTime;
@property (retain, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_msgSvrId;
+ (void)PBArrayAdd_msgContent;
+ (void)PBArrayAdd_msgCreateTime;
+ (void)PBArrayAdd_username;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
