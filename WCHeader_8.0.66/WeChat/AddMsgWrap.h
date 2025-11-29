@class NSString, NSData;

@interface AddMsgWrap : NSObject <PBCoding>

@property (retain, nonatomic) NSString *functionMsgId;
@property (retain, nonatomic) NSData *addMsgData;
@property (retain, nonatomic) NSData *businessData;
@property (nonatomic) unsigned long long businessId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_functionMsgId;
+ (void)PBArrayAdd_addMsgData;
+ (void)PBArrayAdd_businessData;
+ (void)PBArrayAdd_businessId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
