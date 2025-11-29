@class NSString, HTSLiveImage, NSMutableArray;

@interface HTSLivePreviewExposeData_PreviewExitGuide : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *mainText;
@property (copy, nonatomic) NSString *subText;
@property (copy, nonatomic) NSString *schemaURL;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) long long latestLiveRecord;
@property (retain, nonatomic) NSMutableArray *userListArray;
@property (readonly, nonatomic) unsigned long long userListArray_Count;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) int lessFreq;

+ (id)descriptor;

- (id)tag;
- (int)lessFreq;
- (long long)latestLiveRecord;
- (id)buttonText;
- (int)type;
- (id)schemaURL;
- (id)subText;
- (id)mainText;
- (id)icon;
- (void)setLatestLiveRecord:(long long)a0;
- (void)setButtonText:(id)a0;
- (void)setLessFreq:(int)a0;
- (void)setSchemaURL:(id)a0;
- (void)setMainText:(id)a0;
- (void)setType:(int)a0;
- (void)setSubText:(id)a0;

@end
