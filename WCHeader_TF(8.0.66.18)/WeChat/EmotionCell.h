@class NSString;

@interface EmotionCell : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cellTitle;
@property (nonatomic) unsigned int reqType;
@property (nonatomic) unsigned int position;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *tagUrl;

+ (void)initialize;

@end
