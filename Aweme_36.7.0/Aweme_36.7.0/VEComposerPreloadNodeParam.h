@class NSString;

@interface VEComposerPreloadNodeParam : NSObject

@property (nonatomic) BOOL needReload;
@property (nonatomic) unsigned long long reqId;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) unsigned long long stickerId;
@property (retain, nonatomic) NSString *stickerPath;
@property (retain, nonatomic) NSString *stickerTag;

- (void).cxx_destruct;
- (id)description;

@end
