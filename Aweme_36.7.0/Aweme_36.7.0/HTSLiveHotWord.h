@class NSString, HTSLiveText;

@interface HTSLiveHotWord : IESLivePBBaseMessage

@property (nonatomic) long long sequenceId;
@property (nonatomic) long long repeatCount;
@property (copy, nonatomic) NSString *displayCount;
@property (nonatomic) BOOL mockCounter;
@property (copy, nonatomic) NSString *preContent;
@property (retain, nonatomic) HTSLiveText *rtfContent;
@property (nonatomic) BOOL hasRtfContent;
@property (nonatomic) long long showDuration;

+ (id)descriptor;

@end
