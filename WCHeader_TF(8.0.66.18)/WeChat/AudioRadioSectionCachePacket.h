@class NSMutableArray, AudioRadioListenedMark;

@interface AudioRadioSectionCachePacket : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *sectionDataList;
@property (retain, nonatomic) AudioRadioListenedMark *listenedMark;

+ (void)initialize;

@end
