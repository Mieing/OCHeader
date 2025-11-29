@class NSString, NSMutableArray;

@interface AWENewVideoCoverChangeTextTemplateLayerFontCommand : AWENewVideoCoverCommand

@property (retain, nonatomic) NSMutableArray *originFonts;
@property (nonatomic) long long nowType;
@property (retain, nonatomic) NSString *nowResourceId;

- (void)realExecute;
- (void)realUnExecute;
- (void).cxx_destruct;

@end
