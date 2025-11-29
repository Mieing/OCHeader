@interface AWEIMUrgeGenerateContentMessageViewModel : AWEIMMessageViewModel

@property (nonatomic) BOOL hasTrackDataForEntryShow;

+ (void)checkDeleteMessage:(id)a0;

- (void)trackShowEvent;
- (void)setupWithMessage:(id)a0;
- (void)checkDeleteMessage:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
