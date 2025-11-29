@class FWFNSUrlRequestData;

@interface FWFWKFrameInfoData : NSObject

@property (nonatomic) BOOL isMainFrame;
@property (retain, nonatomic) FWFNSUrlRequestData *request;

+ (id)makeWithIsMainFrame:(BOOL)a0 request:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
