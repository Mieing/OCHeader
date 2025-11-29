@class NSData, FinderProfilePreloadConfig;

@interface FinderPreloadConfig : WXPBGeneratedMessage

@property (nonatomic) BOOL userpageIsPreload;
@property (nonatomic) unsigned int userpageWaitTime;
@property (nonatomic) BOOL commentIsPreload;
@property (nonatomic) unsigned int commentWaitTime;
@property (retain, nonatomic) NSData *commentPreloadBuffer;
@property (retain, nonatomic) FinderProfilePreloadConfig *profileConfig;

+ (void)initialize;

- (void)setProfileConfig:(id)a0;
- (id)profileConfig;
- (void)setCommentPreloadBuffer:(id)a0;
- (id)commentPreloadBuffer;
- (void)setCommentWaitTime:(unsigned int)a0;
- (unsigned int)commentWaitTime;
- (void)setCommentIsPreload:(BOOL)a0;
- (BOOL)commentIsPreload;
- (void)setUserpageWaitTime:(unsigned int)a0;
- (unsigned int)userpageWaitTime;
- (void)setUserpageIsPreload:(BOOL)a0;
- (BOOL)userpageIsPreload;

@end
