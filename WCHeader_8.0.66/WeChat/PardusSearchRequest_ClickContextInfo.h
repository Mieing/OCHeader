@class NSString;

@interface PardusSearchRequest_ClickContextInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int clickIndex;
@property (nonatomic) unsigned int searchBarIndex;

+ (void)initialize;

@end
