@class NSString, NSData, NSMutableDictionary;

@interface WCFinderMusicTopicDataProvider : NSObject

@property (copy, nonatomic) NSString *registerExtKey;
@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) NSString *refObjectid;
@property (nonatomic) unsigned long long musicTopicId;
@property (copy, nonatomic) NSString *encryptedMusicId;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) NSData *byPassInfo;
@property (retain, nonatomic) NSMutableDictionary *listRespInfoDic;
@property (retain, nonatomic) NSMutableDictionary *cgiPromiseDic;
@property (retain, nonatomic) NSMutableDictionary *loadingStateDic;
@property (readonly, copy, nonatomic) NSString *feedId;

- (id)initMusicTopicId:(unsigned long long)a0 encryptedMusicId:(id)a1 byPassInfo:(id)a2 commentScene:(int)a3 refObjectid:(id)a4;
- (void)fetchDataByInnerType:(int)a0;
- (void)updateProviderByOutterByInnerType:(int)a0 lastBuff:(id)a1 continueFlag:(BOOL)a2 upContinueFlag:(BOOL)a3 downContinueFlag:(BOOL)a4 totalCount:(unsigned long long)a5 dataArray:(id)a6 topicInfo:(id)a7 similarFlag:(BOOL)a8 poiTopicRecommendArray:(id)a9 subTitle:(id)a10 bgmInfo:(id)a11 feedFollowPermissonFlag:(unsigned int)a12 disabledFlag:(unsigned int)a13;
- (BOOL)containTargetInnerType:(int)a0;
- (BOOL)svrDataAvailable;
- (id)getTargetContentVMArrayByInnerType:(int)a0;
- (id)getTargetDetailViewModelByInnerType:(int)a0;
- (id)getCgiPromiseArray;
- (id)getTargetLoadingStateByInnerType:(int)a0;
- (void).cxx_destruct;

@end
