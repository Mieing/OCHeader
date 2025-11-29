@class VideoTemplate, NSString, FinderTopicInfo;

@interface WCFinderProfileMJTempModel : NSObject

@property (retain, nonatomic) VideoTemplate *videoTemp;
@property (nonatomic) unsigned long long topicId;
@property (readonly, nonatomic) NSString *topicIdStr;
@property (readonly, nonatomic) NSString *templateId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *coverUrl;
@property (nonatomic) struct CGSize { double width; double height; } coverSize;
@property (retain, nonatomic) FinderTopicInfo *topic;

- (id)initWithTopic:(id)a0;
- (void).cxx_destruct;

@end
