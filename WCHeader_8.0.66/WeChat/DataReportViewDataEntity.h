@class NSString, NSMutableDictionary;

@interface DataReportViewDataEntity : NSObject

@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) NSMutableDictionary *viewParams;
@property (retain, nonatomic) NSMutableDictionary *dynamicParamsBlocks;
@property (retain, nonatomic) NSMutableDictionary *innerProperty;
@property (retain, nonatomic) NSMutableDictionary *reportPolicy;

- (id)init;
- (void)reset;
- (id)toString;
- (void).cxx_destruct;

@end
