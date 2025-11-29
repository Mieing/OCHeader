@class NSString, HTSLiveImage;

@interface HistoryData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
