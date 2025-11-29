@class VideoTemplate, NSString, WCFinderContact;

@interface WCFinderMJTempInfo : NSObject

@property (retain, nonatomic) VideoTemplate *videoTemplate;
@property (copy, nonatomic) NSString *templateMusicId;
@property (copy, nonatomic) NSString *topicId;
@property (retain, nonatomic) WCFinderContact *finderContact;
@property (nonatomic) long long originCount;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *becomeCreatorUrl;
@property (nonatomic) BOOL forbidForward;

+ (id)newWithTemplateListResponse:(id)a0;

- (long long)usedCount;
- (id)tempTitle;
- (id)templateId;
- (unsigned long long)templateType;
- (void).cxx_destruct;

@end
