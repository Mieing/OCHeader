@interface BDUGBsyncCursor : GPBMessage

@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasCursor;

+ (id)descriptor;

- (long long)cursor;

@end
