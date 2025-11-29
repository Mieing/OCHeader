@class NSString, NSData, WCFinderDataItem, MMFinderLiveAnchorStatusItem;

@interface WCFinderSetAnchorStatusCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) MMFinderLiveAnchorStatusItem *anchorStatus;
@property (nonatomic) unsigned int liveStatus;
@property (nonatomic) unsigned long long anchorStatusOpFlag;
@property (nonatomic) unsigned long long anchorSettingOpFlag;
@property (nonatomic) BOOL onStartLive;
@property (retain, nonatomic) NSString *makeupsModelType;
@property (retain, nonatomic) NSString *detailSetList;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSData *createLiveBubbleBuffer;
@property (retain, nonatomic) id extraInfo;

- (id)initWithDataItem:(id)a0 anchorStatus:(id)a1 liveStatus:(unsigned int)a2 anchorStatusOpFlag:(unsigned long long)a3 anchorSettingOpFlag:(unsigned long long)a4 onStartLive:(BOOL)a5 createLiveBubbleBuffer:(id)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
