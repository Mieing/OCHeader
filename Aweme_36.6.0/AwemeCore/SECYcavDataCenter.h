@protocol SECDataClassifier;

@interface SECYcavDataCenter : NSObject

@property (retain, nonatomic) id<SECDataClassifier> classifier;

+ (id)shared;

- (void)setupWithClassifier:(id)a0;
- (void).cxx_destruct;

@end
