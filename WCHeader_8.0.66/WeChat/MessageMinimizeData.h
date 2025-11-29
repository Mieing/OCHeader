@class NSString;

@interface MessageMinimizeData : NSObject <PBCoding>

@property (retain, nonatomic) NSString *chatname;
@property (nonatomic) unsigned int msgLocalId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_chatname;
+ (void)PBArrayAdd_msgLocalId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
