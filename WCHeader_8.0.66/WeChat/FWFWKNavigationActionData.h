@class FWFWKFrameInfoData, FWFNSUrlRequestData;

@interface FWFWKNavigationActionData : NSObject

@property (retain, nonatomic) FWFNSUrlRequestData *request;
@property (retain, nonatomic) FWFWKFrameInfoData *targetFrame;
@property (nonatomic) unsigned long long navigationType;

+ (id)makeWithRequest:(id)a0 targetFrame:(id)a1 navigationType:(unsigned long long)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
