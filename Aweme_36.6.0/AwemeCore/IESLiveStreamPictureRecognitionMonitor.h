@class NSString;

@interface IESLiveStreamPictureRecognitionMonitor : NSObject

@property (nonatomic) double recognitionStartTimeStamp;
@property (nonatomic) int currentScene;
@property (retain, nonatomic) NSString *currentEntry;
@property (copy, nonatomic) NSString *pictureStatus;
@property (nonatomic) double requestStartTimeStamp;

- (void)recordRecognitionStartWithWithScene:(int)a0 entryType:(id)a1;
- (void)recordRecognitionFailWithReason:(id)a0;
- (void)markPictureStatus:(id)a0;
- (void)recordRecognitionSuccess;
- (void)recordRecognitionRequestStart;
- (void)recordRecognitionRequestFinishedWithRet:(long long)a0 error:(id)a1 imageSize:(long long)a2 reqId:(unsigned long long)a3;
- (void).cxx_destruct;

@end
