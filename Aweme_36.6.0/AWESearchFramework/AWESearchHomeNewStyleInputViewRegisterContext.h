@class NSString, NSDictionary, UIImage, AWESearchAIGCChunkInboxExtra;

@interface AWESearchHomeNewStyleInputViewRegisterContext : NSObject

@property (copy, nonatomic) NSString *textQuery;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL hasInputInfo;
@property (copy, nonatomic) NSDictionary *userGuideInfo;
@property (retain, nonatomic) AWESearchAIGCChunkInboxExtra *copilotInfo;
@property (retain, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *hintText;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) BOOL openDeepThink;
@property (nonatomic) BOOL openSuperAgent;
@property (nonatomic) BOOL disableSug;
@property (nonatomic) unsigned long long buttonType;

- (void).cxx_destruct;

@end
