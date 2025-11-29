@class AWEIMEmoticonThemeModel, NSArray, NSMutableDictionary, NSString, NSError, NSMutableArray;
@protocol ACCAIEmojiStyleModelProtocol;

@interface AWEIMAImojiAddContext : NSObject <AWEIMTaskPipelineContext>

@property (nonatomic) BOOL isCancelled;
@property (retain, nonatomic) NSMutableArray *helpers;
@property (retain, nonatomic) NSMutableDictionary *uploaders;
@property (retain, nonatomic) NSMutableDictionary *batchAddDic;
@property (retain, nonatomic) id<ACCAIEmojiStyleModelProtocol> artStyle;
@property (retain, nonatomic) NSArray *emoticonList;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long successCount;
@property (nonatomic) unsigned long long createStatusCode;
@property (retain, nonatomic) AWEIMEmoticonThemeModel *themeModel;
@property (nonatomic) double startTime;
@property (nonatomic) double imageUploadDuration;
@property (nonatomic) unsigned long long uploadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
