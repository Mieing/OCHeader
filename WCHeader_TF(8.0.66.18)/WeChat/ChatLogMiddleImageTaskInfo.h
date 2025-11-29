@class NSString;

@interface ChatLogMiddleImageTaskInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *userName;
@property (nonatomic) unsigned long long localID;
@property (copy, nonatomic) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_localID;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
