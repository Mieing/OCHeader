@class NSNumber, NSArray, NSString;

@interface IESLiveSoloKTVPublishConfigImpl : NSObject <IESLiveSoloKTVPublishConfig>

@property (retain, nonatomic) NSNumber *songId;
@property (copy, nonatomic) NSArray *publishTags;
@property (copy, nonatomic) NSString *publishContent;
@property (retain, nonatomic) NSNumber *anchorId;
@property (copy, nonatomic) NSString *anchorTitle;
@property (copy, nonatomic) NSString *anchorTag;
@property (copy, nonatomic) NSString *anchorContent;
@property (copy, nonatomic) NSString *anchorIconURL;
@property (copy, nonatomic) NSString *enterSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
