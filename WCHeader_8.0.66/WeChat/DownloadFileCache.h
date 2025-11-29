@class NSString;

@interface DownloadFileCache : NSObject <PBCoding>

@property (retain, nonatomic) NSString *MD5;
@property (retain, nonatomic) NSString *chatName;
@property (nonatomic) unsigned int localID;
@property (nonatomic) unsigned int lastReadTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_MD5;
+ (void)PBArrayAdd_chatName;
+ (void)PBArrayAdd_localID;
+ (void)PBArrayAdd_lastReadTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
