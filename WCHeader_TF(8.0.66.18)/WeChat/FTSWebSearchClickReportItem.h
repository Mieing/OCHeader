@class NSString;

@interface FTSWebSearchClickReportItem : NSObject

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *searchID;
@property (retain, nonatomic) NSString *recommendID;
@property (nonatomic) unsigned long long businessType;
@property (retain, nonatomic) NSString *docID;
@property (nonatomic) unsigned int docPos;
@property (nonatomic) unsigned int typePos;
@property (nonatomic) unsigned int isHomePage;
@property (nonatomic) unsigned long long timeStamp;
@property (nonatomic) unsigned int expand1;
@property (retain, nonatomic) NSString *suggestionID;
@property (nonatomic) unsigned int clickType;
@property (retain, nonatomic) NSString *expand2;
@property (retain, nonatomic) NSString *logString;
@property (retain, nonatomic) NSString *cdnHttpHead;
@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *byPass;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)initWithLogString:(id)a0;
- (BOOL)isValid;
- (id)description;
- (void).cxx_destruct;

@end
