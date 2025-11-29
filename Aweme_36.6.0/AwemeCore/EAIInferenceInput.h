@class NSString, NSDictionary, NSArray;

@interface EAIInferenceInput : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSArray *data;
@property (retain, nonatomic) NSArray *inputNames;
@property (nonatomic) unsigned long long shapeSize;
@property (nonatomic) unsigned long long rowCount;

- (void).cxx_destruct;

@end
