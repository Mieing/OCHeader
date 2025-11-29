@class NSMutableDictionary;

@interface AWELunaMusicAnchorService : NSObject

@property (retain, nonatomic) NSMutableDictionary *userTypeDict;

+ (id)shared;

- (void)needAutoAddLunaMusicAnchor:(id)a0 completion:(id /* block */)a1;
- (id)getTrackParams;
- (void).cxx_destruct;
- (id)userId;

@end
