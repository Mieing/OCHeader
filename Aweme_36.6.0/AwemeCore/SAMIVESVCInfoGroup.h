@class NSArray, NSString, NSDictionary, NSError;

@interface SAMIVESVCInfoGroup : NSObject

@property (nonatomic) unsigned long long curIndex;
@property (nonatomic) unsigned long long finishTime;
@property (nonatomic) unsigned long long processTime;
@property (nonatomic) unsigned long long curTime;
@property (nonatomic) unsigned long long totalTime;
@property (retain, nonatomic) NSArray *infos;
@property (nonatomic) unsigned long long processUtils;
@property (retain, nonatomic) NSString *uniqueKey;
@property (nonatomic) BOOL enablePreview;
@property (retain, nonatomic) NSString *aggregationPath;
@property (retain, nonatomic) NSDictionary *config;
@property (copy, nonatomic) id /* block */ enablePreviewBlock;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ infoCompletion;
@property (copy, nonatomic) id /* block */ groupCompletion;
@property (nonatomic) BOOL forceStop;
@property (retain, nonatomic) NSError *error;

+ (id)groupOfInfos:(id)a0 aggregationPath:(id)a1;

- (id)curInfo;
- (void)refreshCurProgress;
- (void)finishInfoWithKey:(id)a0;
- (BOOL)missionCompleted;
- (unsigned long long)remainInfosNum;
- (id)infoOfKey:(id)a0;
- (void).cxx_destruct;

@end
