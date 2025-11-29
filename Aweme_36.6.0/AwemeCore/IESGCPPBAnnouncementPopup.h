@class NSString, NSMutableArray;

@interface IESGCPPBAnnouncementPopup : GPBMessage

@property (copy, nonatomic) NSString *id_p;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSMutableArray *highlightsArray;
@property (readonly, nonatomic) unsigned long long highlightsArray_Count;
@property (copy, nonatomic) NSString *mainButtonText;
@property (nonatomic) int mainButtonAction;
@property (copy, nonatomic) NSString *mainButtonURL;
@property (copy, nonatomic) NSString *deputyButtonText;
@property (nonatomic) int deputyButtonAction;
@property (copy, nonatomic) NSString *deputyButtonURL;
@property (nonatomic) int totalLimit;
@property (nonatomic) int dailyLimit;
@property (nonatomic) int priority;

+ (id)descriptor;

@end
