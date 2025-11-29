@class NSString, MBFrameSetPosition;

@interface MBApiInsertFrameSet : WXPBGeneratedMessage

@property (nonatomic) int viewId;
@property (retain, nonatomic) NSString *frameSetName;
@property (retain, nonatomic) NSString *containerTag;
@property (retain, nonatomic) MBFrameSetPosition *position;
@property (nonatomic) BOOL hide;
@property (retain, nonatomic) NSString *rootId;

+ (void)initialize;

@end
