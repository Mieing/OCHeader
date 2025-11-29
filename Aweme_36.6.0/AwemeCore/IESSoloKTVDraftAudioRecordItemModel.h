@class NSString;

@interface IESSoloKTVDraftAudioRecordItemModel : NSObject

@property (retain, nonatomic) NSString *audioPath;
@property (nonatomic) double start;
@property (nonatomic) double duration;
@property (nonatomic) int index;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) double baseStart;

- (void).cxx_destruct;
- (id)deepCopy;
- (id)init;

@end
