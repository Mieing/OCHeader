@class NSString, NSSet;

@interface IESLiveTextClassifierInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) NSString *text;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithText:(id)a0;

@end
