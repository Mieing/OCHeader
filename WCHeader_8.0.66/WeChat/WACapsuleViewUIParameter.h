@class NSString;

@interface WACapsuleViewUIParameter : NSObject

@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *darkModeIconUrl;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL needToPutBackIfInterrupted;

- (void).cxx_destruct;

@end
