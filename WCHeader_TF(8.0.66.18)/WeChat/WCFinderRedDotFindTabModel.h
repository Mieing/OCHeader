@class WCFinderBusinessTabModel, NSString;

@interface WCFinderRedDotFindTabModel : NSObject <PBCoding>

@property (retain, nonatomic) WCFinderBusinessTabModel *finderModel;
@property (retain, nonatomic) WCFinderBusinessTabModel *liveModel;
@property (retain, nonatomic) WCFinderBusinessTabModel *socialHotModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_finderModel;
+ (void)PBArrayAdd_liveModel;
+ (void)PBArrayAdd_socialHotModel;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)increaseExposeCount:(unsigned long long)a0;
- (void)increaseClickCount:(unsigned long long)a0;
- (void)_updateModel:(unsigned long long)a0;
- (long long)getExposeCount:(unsigned long long)a0;
- (long long)getClickCount:(unsigned long long)a0;
- (void).cxx_destruct;

@end
