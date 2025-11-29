@class NSString;

@interface WeNoteShareSnsInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *noteTitle;
@property (retain, nonatomic) NSString *noteDesc;
@property (retain, nonatomic) NSString *noteXml;
@property (nonatomic) unsigned int favLocalId;
@property (retain, nonatomic) NSString *thumbPath;
@property (nonatomic) float thumbWidth;
@property (nonatomic) float thumbHeight;
@property (nonatomic) unsigned int thumbDataSize;

+ (void)initialize;

@end
