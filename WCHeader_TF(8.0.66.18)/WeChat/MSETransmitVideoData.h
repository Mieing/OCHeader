@class NSString;

@interface MSETransmitVideoData : MSETransmitData <PBCoding>

@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSString *thumbPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_videoUrl;
+ (void)PBArrayAdd_filePath;
+ (void)PBArrayAdd_thumbPath;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
