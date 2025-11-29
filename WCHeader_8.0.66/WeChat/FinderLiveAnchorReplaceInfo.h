@class NSString;

@interface FinderLiveAnchorReplaceInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL needReplaceNickname;
@property (retain, nonatomic) NSString *replaceNickname;

+ (void)initialize;

- (void)setReplaceNickname:(id)a0;
- (id)replaceNickname;
- (void)setNeedReplaceNickname:(BOOL)a0;
- (BOOL)needReplaceNickname;

@end
