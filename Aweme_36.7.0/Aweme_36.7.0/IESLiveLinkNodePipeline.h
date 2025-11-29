@class NSString, NSMutableArray;
@protocol IESLiveLinkReporterProtocol;

@interface IESLiveLinkNodePipeline : NSObject

@property (weak, nonatomic) id<IESLiveLinkReporterProtocol> reporter;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *filters;
@property (retain, nonatomic) NSMutableArray *inputs;
@property (retain, nonatomic) NSMutableArray *outputs;

- (id)nodeWithIdentifier:(id)a0;
- (id)initWithOrderedFilters:(id)a0 inputs:(id)a1 outputs:(id)a2 identifier:(id)a3 reporter:(id)a4;
- (void)addFilters:(id)a0 inputs:(id)a1 outputs:(id)a2;
- (id)filterWithIdentifier:(id)a0;
- (void)removeFilterWithID:(id)a0;
- (void)removeOutputWithID:(id)a0;
- (void)replaceAllOutputs:(id)a0;
- (void)replaceOutputWithOldID:(id)a0 newOutput:(id)a1;
- (id)outputWithIdentifier:(id)a0;
- (void)removeFilters:(id)a0 inputs:(id)a1 outputs:(id)a2;
- (id)inputWithIdentifier:(id)a0;
- (void)_refreshFilters;
- (void)replaceAllFilters:(id)a0 inputs:(id)a1 outputs:(id)a2;
- (void)removeNodeWithID:(id)a0;
- (void)replaceAllInputs:(id)a0;
- (void)removeInputWithID:(id)a0;
- (void)addFilter:(id)a0 atIndex:(unsigned long long)a1;
- (void)replaceFilterAtIndex:(unsigned long long)a0 withFilter:(id)a1;
- (void)replaceAllFilters:(id)a0;
- (void)removeFilterAtIndex:(unsigned long long)a0;
- (void)addOutput:(id)a0;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)addInput:(id)a0;
- (void)removeOutput:(id)a0;
- (long long)filterCount;
- (void)removeFilter:(id)a0;
- (void)removeAllFilters;
- (long long)inputCount;
- (long long)outputCount;
- (void)removeInput:(id)a0;

@end
