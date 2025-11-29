@class NSString, JumpInfo, NSMutableArray;

@interface ChatroomMsgSheetCard : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *picUrl;
@property (retain, nonatomic) JumpInfo *jumpInfo;
@property (retain, nonatomic) NSMutableArray *sheetRowList;
@property (retain, nonatomic) NSString *bgPicUrl;

+ (void)initialize;

@end
