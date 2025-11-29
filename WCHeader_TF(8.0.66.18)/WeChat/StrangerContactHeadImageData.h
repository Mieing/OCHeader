@class NSString, NSMutableDictionary, NSMutableArray;

@interface StrangerContactHeadImageData : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *dicContactUserNameHeadImagUrl;
@property (retain, nonatomic) NSMutableArray *arrContactUserName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicContactUserNameHeadImagUrl;
+ (void)PBArrayAdd_arrContactUserName;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
