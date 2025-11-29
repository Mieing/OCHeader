@class NewDocumentItem;

@interface FaultControlInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NewDocumentItem *banner;
@property (nonatomic) int confirmButtonDisable;
@property (nonatomic) int autoShowCardPanel;

+ (void)initialize;

@end
