@class NSString;

@interface MMFile : NSObject <PBCoding>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long size;
@property (nonatomic) int fileClass;
@property (nonatomic) long long fileID;
@property (nonatomic) int fileInUseType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_size;
+ (void)PBArrayAdd_fileID;
+ (void)initialize;

@end
