@interface AwemeControlStructV2 : GPBMessage

@property (nonatomic) BOOL canForward;
@property (nonatomic) BOOL hasCanForward;
@property (nonatomic) BOOL canShare;
@property (nonatomic) BOOL hasCanShare;
@property (nonatomic) BOOL canComment;
@property (nonatomic) BOOL hasCanComment;
@property (nonatomic) BOOL canShowComment;
@property (nonatomic) BOOL hasCanShowComment;
@property (nonatomic) BOOL disableCollect;
@property (nonatomic) BOOL hasDisableCollect;
@property (nonatomic) BOOL disableDigg;
@property (nonatomic) BOOL hasDisableDigg;
@property (nonatomic) BOOL fromGoldenHouse;
@property (nonatomic) BOOL hasFromGoldenHouse;

+ (id)descriptor;

- (BOOL)canShowComment;
- (BOOL)canComment;
- (BOOL)canShare;
- (BOOL)canForward;

@end
