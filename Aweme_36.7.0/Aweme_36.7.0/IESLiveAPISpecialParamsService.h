@class HTSEventContext, NSMutableSet, NSDictionary;

@interface IESLiveAPISpecialParamsService : NSObject

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSMutableSet *specialParamsURLs;
@property (retain, nonatomic) NSDictionary *trackContextParams;

- (id)initWithTrackContext:(id)a0;
- (void)addSpecialParamsIfNeeded:(id)a0;
- (id)extractTrackContextParams;
- (BOOL)shouldAddSpecialParamsForRequest:(id)a0;
- (void).cxx_destruct;

@end
