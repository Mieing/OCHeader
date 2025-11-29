@class NSString;

@interface SECYcavSimpleClassifySource : NSObject <SECYcavClassifyDataSource>

@property (retain, nonatomic) id obj;
@property (retain, nonatomic) id detectTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataSourceWithObj:(id)a0 targetDetectingObj:(id)a1;

- (id)targetContent;
- (id)datasourceId;
- (void).cxx_destruct;

@end
