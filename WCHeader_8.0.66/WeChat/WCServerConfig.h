@class SnsServerConfig;

@interface WCServerConfig : NSObject

@property (readonly, nonatomic) SnsServerConfig *pbServerConfig;
@property (nonatomic) unsigned int postMentionLimit;
@property (nonatomic) unsigned int postTogetherLimit;
@property (nonatomic) unsigned int pasteLengthLimit;
@property (nonatomic) int tiger2022PostStatus;
@property (nonatomic) int tiger2022SourceStatus;
@property (nonatomic) int firstPageCount;
@property (nonatomic) int nextPageCount;

- (id)init;
- (id)initWithPbObject:(id)a0;
- (void).cxx_destruct;

@end
