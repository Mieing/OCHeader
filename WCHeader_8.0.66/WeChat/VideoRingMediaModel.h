@class WCFinderMediaInfo, RingTone, NSString, WCFinderDataItem;

@interface VideoRingMediaModel : NSObject

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) RingTone *originRing;
@property (readonly, nonatomic) WCFinderMediaInfo *mediaInfo;
@property (readonly, nonatomic) double videoDuration;
@property (nonatomic) double cropStartTime;
@property (nonatomic) double cropEndTime;
@property (copy, nonatomic) NSString *friendUserName;

- (id)initWithDataItem:(id)a0 originRingBack:(id)a1;
- (id)formatVideoPath;
- (BOOL)hasLocalVideoFile;
- (id)genAudioFileTransferTaskWith:(id)a0;
- (id)cropedTempAudioFilePath;
- (id)downloadedLocalFilePath;
- (id)getRingRawFilePath:(id)a0;
- (id)getRingAudioFilePath;
- (void).cxx_destruct;

@end
