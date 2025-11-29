@class NSMutableArray, IESECLiveMediaContainerTranslateRecordMeta;

@interface IESECLiveMediaContainerTranslateRecord : NSObject

@property (retain, nonatomic) NSMutableArray *metas;
@property (retain, nonatomic) IESECLiveMediaContainerTranslateRecordMeta *currentMeta;

- (void)record:(long long)a0 scene:(id)a1;
- (void)attach:(long long)a0 scene:(id)a1;
- (void)remove:(long long)a0 scene:(id)a1;
- (BOOL)isCurrentMeta:(long long)a0 scene:(id)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
