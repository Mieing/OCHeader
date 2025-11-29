@class NSDictionary;

@interface AWEHPTabComponentTrackHelper : NSObject

@property (copy, nonatomic) NSDictionary *detailsTabDict;
@property (nonatomic) double globalLastShowTimestamp;
@property (nonatomic) long long globalShowIndex;

- (id)getAndUpdateComponentShowDetailsInfo:(id)a0 withTrackModel:(id)a1;
- (id)getAndUpdateComponentShowDetailsInfo:(id)a0;
- (id)getComponentShowDetailsModel:(id)a0;
- (void)updateTabDict:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
