@class NSString;

@interface SECSimpleKeyItemClassifier : NSObject <SECKeyPathItemClassifier>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ ruler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
