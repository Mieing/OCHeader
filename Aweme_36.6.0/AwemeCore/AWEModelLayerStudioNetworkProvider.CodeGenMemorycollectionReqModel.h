@class NSString, NSArray, _TtC34AWEModelLayerStudioNetworkProvider29CodeGenStatisticsinfoReqModel, NSNumber;

@interface AWEModelLayerStudioNetworkProvider.CodeGenMemorycollectionReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ collectionid;
    void /* function */ assetids;
    void /* function */ topicname;
    void /* function */ topicid;
    void /* function */ followtopicname;
    void /* function */ followtopicid;
    void /* function */ coverassetid;
    void /* function */ collectionname;
    void /* function */ category;
}

@property (nonatomic, copy) NSString *collectionid;
@property (nonatomic, copy) NSArray *assetids;
@property (nonatomic, copy) NSString *topicname;
@property (nonatomic, copy) NSString *topicid;
@property (nonatomic, copy) NSString *followtopicname;
@property (nonatomic, copy) NSString *followtopicid;
@property (nonatomic, retain) NSNumber *collectiontype;
@property (nonatomic, retain) NSNumber *createtime;
@property (nonatomic, retain) NSNumber *qualityscore;
@property (nonatomic, retain) NSNumber *startshowtime;
@property (nonatomic, retain) NSNumber *endshowtime;
@property (nonatomic, copy) NSString *coverassetid;
@property (nonatomic, copy) NSString *collectionname;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, retain) _TtC34AWEModelLayerStudioNetworkProvider29CodeGenStatisticsinfoReqModel *statisticsinfo;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
