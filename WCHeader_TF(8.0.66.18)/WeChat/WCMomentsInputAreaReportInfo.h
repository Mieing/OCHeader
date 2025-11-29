@class NSString;

@interface WCMomentsInputAreaReportInfo : NSObject

@property (nonatomic) unsigned long long contextType;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *feedID;
@property (retain, nonatomic) NSString *commentID;
@property (nonatomic) unsigned long long opResult;
@property (nonatomic) unsigned long long wordCount;
@property (nonatomic) unsigned long long lineCount;
@property (nonatomic) double contextScreenHeightRatio;
@property (nonatomic) unsigned long long wordLimiedToastCount;

- (id)initWithContextType:(unsigned long long)a0;
- (id)genReportString;
- (void)report;
- (void).cxx_destruct;

@end
