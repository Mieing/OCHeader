@class NSArray, NSMutableArray, NSString;

@interface AWEPOIMapDirectionItem : NSObject

@property (retain, nonatomic) NSMutableArray *overlayList;
@property (retain, nonatomic) NSMutableArray *annotations;
@property (nonatomic) long long type;
@property (readonly, nonatomic) NSArray *overlays;
@property (copy, nonatomic) NSString *eta;
@property (nonatomic) double duration;

- (void)replaceOverlays:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addAnnotations:(id)a0;
- (void)addOverlay:(id)a0;

@end
