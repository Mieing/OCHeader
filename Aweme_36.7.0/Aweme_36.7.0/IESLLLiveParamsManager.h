@class NSDictionary, NSArray;

@interface IESLLLiveParamsManager : NSObject

@property (retain, nonatomic) NSDictionary *paramsOptimizeWhiteListConfig;
@property (retain, nonatomic) NSArray *functionalParamsList;

+ (id)shareManager;

- (id)filterSessionParams:(id)a0 passParams:(id)a1;
- (id)filterValidJsonWithDictionary:(id)a0;
- (id)filterParamsForUrlString:(id)a0 originServerUrl:(id)a1 enableOptimize:(BOOL)a2;
- (id)filterSessionParams:(id)a0 passParams:(id)a1 enableOptimize:(BOOL)a2;
- (id)filterTrackerRoomData:(id)a0 enableOptimize:(BOOL)a1;
- (id)filterNonBaseTypeInValue:(id)a0 baseClasses:(id)a1;
- (id)filterParamsForUrlString:(id)a0 originServerUrl:(id)a1;
- (id)filterTrackerRoomData:(id)a0;
- (BOOL)enableParamsNumOptimize;
- (void).cxx_destruct;

@end
