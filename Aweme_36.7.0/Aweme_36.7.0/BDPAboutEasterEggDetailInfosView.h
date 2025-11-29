@class NSMutableArray, BDPUniqueID, NSMutableDictionary;

@interface BDPAboutEasterEggDetailInfosView : UIView

@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSMutableDictionary *infoMap;
@property (retain, nonatomic) NSMutableArray *infoArray;

- (id)getType:(long long)a0;
- (void)fillStaticDebugInfo;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;
- (void)setupContentView;

@end
