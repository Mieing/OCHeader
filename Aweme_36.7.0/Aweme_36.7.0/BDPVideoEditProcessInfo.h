@class NSString, NSDictionary, NSArray, VEEditorSession, NSMutableArray, HTSVideoData;

@interface BDPVideoEditProcessInfo : NSObject

@property (nonatomic) long long editType;
@property (copy, nonatomic) NSString *videoPath;
@property (nonatomic) struct CGSize { double width; double height; } videoResolution;
@property (nonatomic) double totalClipDuration;
@property (copy, nonatomic) NSDictionary *effectConfig;
@property (retain, nonatomic) NSMutableArray *clipInfos;
@property (copy, nonatomic) NSArray *stickerInfos;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) VEEditorSession *editorSession;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (nonatomic) BOOL canceling;
@property (nonatomic) BOOL transing;
@property (nonatomic) BOOL lazyCancel;

- (void).cxx_destruct;

@end
