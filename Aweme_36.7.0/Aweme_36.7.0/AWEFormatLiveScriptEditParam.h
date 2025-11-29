@class NSNumber, NSString;

@interface AWEFormatLiveScriptEditParam : NSObject

@property (nonatomic) unsigned long long action;
@property (retain, nonatomic) NSNumber *chapterIndex;
@property (copy, nonatomic) NSString *playId;
@property (copy, nonatomic) NSString *chapterContent;
@property (copy, nonatomic) NSString *chapterGoCond;

- (void).cxx_destruct;

@end
