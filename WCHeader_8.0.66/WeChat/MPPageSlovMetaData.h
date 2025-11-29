@class NSString;

@interface MPPageSlovMetaData : NSObject <PBCoding>

@property (nonatomic) unsigned int referMsgSendTime;
@property (nonatomic) unsigned int firstMsgSendTime;
@property (nonatomic) unsigned int lastMsgSendTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_referMsgSendTime;
+ (void)PBArrayAdd_firstMsgSendTime;
+ (void)PBArrayAdd_lastMsgSendTime;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
