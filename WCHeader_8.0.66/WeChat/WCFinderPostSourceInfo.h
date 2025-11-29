@class NSString;

@interface WCFinderPostSourceInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *sourceFeedId;
@property (copy, nonatomic) NSString *sourceFeedSessionBuffer;
@property (nonatomic) int sourceFeedCommentScene;
@property (copy, nonatomic) NSString *sourceSongId;
@property (copy, nonatomic) NSString *sourceAudioId;
@property (nonatomic) unsigned long long musicSourcePosition;
@property (copy, nonatomic) NSString *sourceEventId;
@property (copy, nonatomic) NSString *sourceTopicName;
@property (copy, nonatomic) NSString *sourceTemplateId;
@property (nonatomic) unsigned long long sourceTemplateType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_sourceFeedId;
+ (void)PBArrayAdd_sourceFeedSessionBuffer;
+ (void)PBArrayAdd_sourceSongId;
+ (void)PBArrayAdd_musicSourcePosition;
+ (void)PBArrayAdd_sourceFeedCommentScene;
+ (void)initialize;

@end
