@class NSMutableDictionary;

@interface AWEMusicIMMessageService : NSObject

@property (retain, nonatomic) NSMutableDictionary *dspToMiniDic;
@property (retain, nonatomic) NSMutableDictionary *miniToDspDic;

+ (id)shared;

- (id)musicIdClipMappingWithOriginalId:(id)a0;
- (void)batchGetMusicLiteInfosWithIdInfos:(id)a0 completed:(id /* block */)a1;
- (void).cxx_destruct;

@end
