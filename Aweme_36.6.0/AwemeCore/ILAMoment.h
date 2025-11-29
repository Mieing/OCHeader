@class NSString, NSMutableArray, NSMutableDictionary;

@interface ILAMoment : NSObject <AWEInTodayAlbumModelProtocol>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverId;
@property (nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *coverAssetId;
@property (retain, nonatomic) NSMutableArray *assetIds;
@property (retain, nonatomic) NSMutableDictionary *assetInfo;
@property (retain, nonatomic) NSMutableDictionary *scanResult;

- (id)initWithOriginMoment:(struct shared_ptr<ILASDK::Moment> { struct Moment *x0; struct __shared_weak_count *x1; })a0;
- (id)coverId;
- (id)awe_imSkylightConfig;
- (void).cxx_destruct;
- (unsigned long long)count;

@end
