@class MJCaptionReportRequestInfo, NSArray;

@interface MJCaptionReportVoiceInfo : NSObject

@property (retain, nonatomic) MJCaptionReportRequestInfo *requestInfo;
@property (retain, nonatomic) NSArray *captionResult;

- (id)init;
- (id)transResultFromCaptionResult;
- (id)toVoiceInfoPB;
- (id)description;
- (void).cxx_destruct;

@end
