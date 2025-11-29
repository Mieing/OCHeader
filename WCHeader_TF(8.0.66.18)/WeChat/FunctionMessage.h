@class NSString;

@interface FunctionMessage : NSObject <PBCoding>

@property (retain, nonatomic) NSString *functionMsgId;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSString *chatName;
@property (nonatomic) long long msgSvrId;
@property (nonatomic) unsigned int opType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_msgSvrId;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_functionMsgId;
+ (void)PBArrayAdd_chatName;
+ (void)PBArrayAdd_opType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
