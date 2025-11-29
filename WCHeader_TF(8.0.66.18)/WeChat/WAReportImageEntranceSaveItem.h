@class NSString;

@interface WAReportImageEntranceSaveItem : WAReportBaseItem

@property (copy, nonatomic) NSString *userName;
@property (nonatomic) unsigned int saveTimeStamp;
@property (copy, nonatomic) NSString *currentAppId;
@property (copy, nonatomic) NSString *currentPath;
@property (copy, nonatomic) NSString *imageSrc;
@property (copy, nonatomic) NSString *imageAppId;
@property (copy, nonatomic) NSString *imagePath;
@property (copy, nonatomic) NSString *imageKey;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
