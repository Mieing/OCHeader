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

@end
