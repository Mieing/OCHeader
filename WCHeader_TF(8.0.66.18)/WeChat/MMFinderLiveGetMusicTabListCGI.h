@class NSData;

@interface MMFinderLiveGetMusicTabListCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ success;
@property (copy, nonatomic) id /* block */ fail;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int tabType;

- (id)initWithFinderTaskId:(id)a0 lastBuffer:(id)a1 liveCookies:(id)a2 tabType:(unsigned int)a3 success:(id /* block */)a4 fail:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
