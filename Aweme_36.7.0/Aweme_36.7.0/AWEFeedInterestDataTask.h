@class NSMutableDictionary, AWEFeedInterestServerDataModel, AWEAwemeModel;

@interface AWEFeedInterestDataTask : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) AWEFeedInterestServerDataModel *serverDataModel;
@property (retain, nonatomic) NSMutableDictionary *downloadedImages;

- (id)initWithAwemeModel:(id)a0;
- (id)generateDoubleCardEntry;
- (void)p_prepareData;
- (void)p_fetchCoverWithAwemes:(id)a0;
- (void)asyncDecodeServerDataInAweme:(id)a0 completion:(id /* block */)a1;
- (void)fetchFrontImageItemID:(id *)a0 backImageItemID:(id *)a1;
- (void).cxx_destruct;

@end
