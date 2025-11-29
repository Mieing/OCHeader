@class NSString;

@interface MSEMessageMetaDataAppMsgItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *contentUrl;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) unsigned int fileSize;
@property (retain, nonatomic) NSString *fileMd5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_toUsername;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_contentUrl;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_fileName;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_fileMd5;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
