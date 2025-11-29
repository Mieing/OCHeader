@class NSString, NSMutableArray;

@interface StatusCommentMessageThumb : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tid;
@property (nonatomic) int mediaType;
@property (retain, nonatomic) NSString *thumbPath;
@property (nonatomic) long long option;
@property (retain, nonatomic) NSString *sourceId;
@property (retain, nonatomic) NSMutableArray *sourceJumpInfos;
@property (retain, nonatomic) NSMutableArray *jumpInfos;
@property (retain, nonatomic) NSString *textStateDescription;
@property (retain, nonatomic) NSString *iconDescription;

+ (void)initialize;

@end
