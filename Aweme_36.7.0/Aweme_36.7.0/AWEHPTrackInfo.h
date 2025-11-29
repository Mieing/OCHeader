@class NSString, NSDictionary, AWEHPTrackInfoContext;

@interface AWEHPTrackInfo : NSObject

@property (readonly, copy, nonatomic) NSString *event;
@property (readonly, nonatomic) NSDictionary *rawParams;
@property (readonly, nonatomic) AWEHPTrackInfoContext *context;

- (id)initWithEvent:(id)a0 rawParams:(id)a1;
- (void).cxx_destruct;

@end
