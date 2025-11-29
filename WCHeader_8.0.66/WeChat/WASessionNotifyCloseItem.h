@class NSString;

@interface WASessionNotifyCloseItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *headImageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_headImageURL;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
