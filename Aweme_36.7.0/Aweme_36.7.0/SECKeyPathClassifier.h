@class NSDictionary, NSString;

@interface SECKeyPathClassifier : NSObject <SECDataClassifier>

@property (copy, nonatomic) NSDictionary *itemClassifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)classify:(id)a0;
- (void)setupClassifiers:(id)a0;
- (id)initWithItemClassifiers:(id)a0;
- (void).cxx_destruct;
- (id)supportedTypes;

@end
