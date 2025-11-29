@class NSString;

@interface WCFinderShareExposeReportModel : NSObject

@property (nonatomic) unsigned long long entersession;
@property (nonatomic) double event_time;
@property (nonatomic) unsigned long long cardType;
@property (nonatomic) unsigned long long sourceCommentScene;
@property (copy, nonatomic) NSString *sourceusr;
@property (copy, nonatomic) NSString *feedid;
@property (copy, nonatomic) NSString *eventId;
@property (copy, nonatomic) NSString *shareUsername;
@property (copy, nonatomic) NSString *collectionID;
@property (nonatomic) double shareSuccessTime;
@property (copy, nonatomic) NSString *messageId;

+ (void)msgContentVCExpose;

- (void)log;
- (void).cxx_destruct;

@end
